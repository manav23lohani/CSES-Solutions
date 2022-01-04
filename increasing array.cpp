#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int res = 0;
	for(int i=1; i<n; i++)
	{
		if(a[i] >= a[i-1])
			continue;
		res += abs(a[i]-a[i-1]);
		a[i] = a[i-1];
	}
	cout << res;
	return 0;
}