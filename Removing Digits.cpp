#include<bits/stdc++.h> 
using namespace std;
int main() 
{
    int n;
    cin >> n;
    // state: dp[i] --> no. of steps required to make the num i equal to 0
    vector<int> dp(n+1,INT_MAX);
    // base case (0 moves required if num is 0)
    dp[0]=0;
    for(int i=1; i<=n; i++) {
        int num = i;
        while(num>0) {
            int ld=num%10;
            num /= 10;
            if(ld>0)    // ignore 0 as it doesn't reduces the number
            // transition: consider all digits and take the min steps required to convert (i-ld) to 0
                dp[i] = min(dp[i],1+dp[i-ld]);
        }
    }
    cout << dp[n];
    return 0; 
}