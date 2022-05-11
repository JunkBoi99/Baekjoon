#include <cstdio>
#include <iostream>
using namespace std;

int dp[5000];

int main()
{
    int n;
    scanf("%d",&n);
    
    dp[3] = dp[5] = 1;

    for(int i = 6;i<=n;i++)
    {
        if(dp[i-3]) dp[i] = dp[i-3] + 1;
        if(dp[i-5]) dp[i]  = dp[i] ? min(dp[i],dp[i-5] + 1) : dp[i-5] + 1;
    }

    int ans = (dp[n] == 0 ? -1 : dp[n]);

    printf("%d",ans);
}