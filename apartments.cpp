#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n, m ,k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<m; i++)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	int res = 0, i = 0, j = 0;
	while(i<n and j<m)
	{
		if(abs(a[i]-b[j])<=k)
		{
			res++;
			i++;
			j++;
		}
		else if(a[i] > b[j])
			j++;
		else
			i++;
	}
	cout << res;
	return 0;
}