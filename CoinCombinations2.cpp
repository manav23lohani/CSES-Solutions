#include<bits/stdc++.h>
using namespace std;
// #define int  long long
#define mod 1000000007

int32_t main()
{
  int n, amt;
  cin >> n >> amt;
  vector<int> coins(n);
  for(int i=0; i<n; i++)
    cin >> coins[i];

  // state: dp[i][x] --> total valid ways in which we can get amt x using first i coins
    
  vector<vector<int>> dp(n+1,vector<int>(amt+1));
  for(int i=1; i<=n; i++){
    for(int j=0; j<=amt; j++){
  // base case: only 1 way to make amt=0 (pick no coin)
      if(j==0)
        dp[i][j] = 1;
      else{
        int include = (coins[i-1] > j) ? 0 : dp[i][j-coins[i-1]];
        int notinclude = (i==1) ? 0 : dp[i-1][j];
  // transition: dp[i][x] = dp[i][x-coins[i]] + dp[i-1][x]
        dp[i][j] = (include + notinclude)%mod;
      }
    }
  }
  cout << dp[n][amt];
  return 0;
}