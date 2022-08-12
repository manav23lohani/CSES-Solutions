#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define mod 1000000007
int32_t main()
{    
  int n, amt;
  cin >> n >> amt;
  vector<int> coins(n);
  for(int i=0; i<n; i++)
    cin >> coins[i];
  // state: dp[i] --> total no of ways to get amt i
  vector<int> dp(amt+1,0);
  // base case (only 1 way to get amt 0 i.e. select no coin)
  dp[0]=1;
  for(int i=1; i<=amt; i++) {
    for(int x: coins){
      // ignore if coin value greater than amt
      if(x>i) continue;
      // transitition: total ways is sum of ways to get i-x (using each coin x)
      dp[i]=(dp[i]+dp[i-x])%mod;
    }
  }
  cout << dp[amt];
  return 0;
}