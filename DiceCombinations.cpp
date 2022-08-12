#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define mod             1000000007

int32_t main()
{
  int n;
  cin >> n;
  vector<int> dp(n+1,0);
  dp[0]=1;
  // dp[0] = 1  base case
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=min(i,6LL); j++){
  // dp[i] --> total ways in which we can obtain a sum of i
      (dp[i] += dp[i-j]) %= mod;
    }
  }
  cout << dp[n];
  return 0;
}