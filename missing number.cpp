#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	int n ,sum = 0;
	cin >> n;
	int x;
	for(int i=0; i<n-1; i++)
	{
		cin >> x;
		sum += x;
	}
	cout << (n*(n+1))/2 - sum;
	return 0;
}