#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int y, x;
		cin >> y >> x;
		if(y > x)
		{
			if(y%2)
				cout << (y-1)*(y-1) + 1 + (x-1);
			else
				cout << y*y - (x-1);
		}
		else
		{
			if(x%2)
				cout << x*x - (y-1);
			else
				cout << (x-1)*(x-1) + 1 + (y-1);
		}
		cout << endl;
	}
	return 0;
}