#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
  int n, m;
  cin >> n >> m;
  multiset<int> h;
  for(int i=0; i<n; i++)
  {
  	int x;
  	cin >> x;
  	h.insert(x);
  }
  for(int i=0; i<m; i++)
  {
  	int t;
  	cin >> t;
  	auto it = h.upper_bound(t);
  	if(it == h.begin())
  		cout << -1;
  	else
  	{
  		--it;
  		cout << *it;
  		h.erase(it);
  	}
  	cout << endl;
  }
  return 0;
}
