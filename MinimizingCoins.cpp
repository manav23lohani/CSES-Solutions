#include<bits/stdc++.h>
using namespace std;
#define int  long long

int32_t main()
{
  int n, amt;
  cin >> n >> amt;
  vector<int> coins(n);
  for(int i=0; i<n; i++)
    cin >> coins[i];
  // dp[i] --> minimum coins required to get amt equal to i
  vector<int> dp(amt+1,INT_MAX);
  // base case (zero coin required to make amt 0)
  dp[0] = 0;
  for(int i=1; i<=amt; i++) {
    for(int x: coins){
      // to avoid negative amt case, if coin value is greater than required amt
      if(x > i)
        continue;
      // min coins required to build amt i using coin of value x
      dp[i] = min(dp[i],dp[i-x]);
    }
    dp[i]++;
  }
  // if we can't form the value with given coins
  if(dp[amt] == INT_MAX+1LL)
    cout << -1;
  else
    cout << dp[amt];
  return 0;
}