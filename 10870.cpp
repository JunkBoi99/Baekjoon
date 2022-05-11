#include <iostream>
using namespace std;

int n,dp[21]={0,1};

int fib(int x)
{
    if(x<2) return x;
    if(dp[x]) return dp[x];
    dp[x]=dp[x-1]+dp[x-2];
    return dp[x];
}

int main()
{
    cin >> n;
    cout << fib(n);
}
