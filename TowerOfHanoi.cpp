#include<bits/stdc++.h>
using namespace std;
#define int  long long

vector<pii> res;
void rec(int n, int s, int m, int d) {
  if(n==0)  return;
  rec(n-1,s,d,m);
  res.pb({s,d});
  rec(n-1,m,s,d);
}
int32_t main()
{
  int n;
  cin >> n;
  rec(n,1,2,3);
  cout << res.size() << endl;
  for(auto x: res)
    cout << x.ff << ' ' << x.ss << endl;
  return 0;
}