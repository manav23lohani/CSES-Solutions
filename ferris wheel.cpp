#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0; i<n; i++)
	cin >> a[i];
	sort(a,a+n);
	int s=0, e=n-1, res = 0;
	while(s < e)
	{
		if(a[s] + a[e] <= x)
			s++;
		e--;
		res++;
	}
	cout << res + (s==e);
	return 0;
}