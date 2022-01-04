#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n, mod = 1000000007;
	int res = 1;
	cin >> n;
	for(int i=1; i<=n; i++)
		res = (res*2)%mod;         //Don't forget to take mod at each step to avoid integer overflow
	cout << res;
	return 0;
}