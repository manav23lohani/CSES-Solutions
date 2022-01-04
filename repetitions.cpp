#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
	string s;
	cin >> s;
	int cur = 1, res = 1;
	for(int i=1; i<s.length(); i++)
	{
		if(s[i] == s[i-1])
			cur++;
		else
			cur = 1;
		res = max(res,cur);
	}
	cout << res;
	return 0;
}