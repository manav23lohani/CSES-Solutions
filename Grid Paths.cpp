#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<string> matrix(n);
    for(int i=0; i<n; i++)
        cin >> matrix[i];
    // state: dp[i][j] --> total no of valid paths to reach cell i,j starting from 1,1 
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        // base condition (1 way to reach starting cell if cell is not blocked *)
            if(i==1 and j==1 and matrix[0][0]=='.'){
                dp[i][j]=1;
                continue;
            }
        // if any cell is blocked then no path to reach it
            if(matrix[i-1][j-1] == '*')
                dp[i][j]=0;
            else{
        // transition: we can reach i,j either from i-1 row(moving down) or j-1 column(moving right)
                if(i>1)
                    dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
                if(j>1)
                    dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod;
            }
        }
    }
    cout << dp[n][n];
    return 0; 
}