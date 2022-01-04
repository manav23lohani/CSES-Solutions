#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin >> n;
	if(n == 2 or n == 3)
		cout << "NO SOLUTION";
	else
	{
		for(int i=2; i<=n; i+=2)
			cout << i << ' ';
		for(int i=1; i<=n; i+=2)
			cout << i << ' ';
	}
	return 0;
}