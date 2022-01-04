#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin >> n;
	int sum = (n*(n+1))/2;
	if(!(n/2)%2 or sum%2)
		cout << "NO";
	else
	{
		cout << "YES" << endl;
		vector<int> v1,v2;
		if(n%2)
		{
			v1.push_back(n--);
			for(int i=1; i<=n/2; i+= 2)
			{
				v2.push_back(i);
				v2.push_back(n-i+1);
			}
			for(int i=2; i<n/2; i += 2)
			{
				v1.push_back(i);
				v1.push_back(n-i+1);
			}
		}
		else
		{
			for(int i=1; i<n/2; i += 2)
			{
				v1.push_back(i);
				v1.push_back(n-i+1);
			}
			for(int i=2; i<=n/2; i += 2)
			{
				v2.push_back(i);
				v2.push_back(n-i+1);
			}
		}
		cout << v1.size() << endl;
		for(int x: v1)
			cout << x << ' ';
		cout << endl << v2.size() << endl;
		for(int x: v2)
			cout << x << ' ';
	}
	return 0;
}