#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main() 
{
    int n, x;
    cin >> n >> x;
    vector<int> prices(n+1), pages(n+1);
    for(int i=1; i<=n; i++)
        cin >> prices[i];
    for(int i=1; i<=n; i++)
        cin >> pages[i];
    // state: dp[i][x] --> max no of pages we can buy using amt x if we have starting i books
    vector<vector<int>> dp(n+1,vector<int> (x+1,0));
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=x; j++) {
            if(i==0 or j==0)
        // base case (when we can pick 0 books or we have 0 amt)
                dp[i][j]=0;
            else{
        // transition:                
                if(j>=prices[i])
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-prices[i]] + pages[i]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][x];
    return 0; 
}