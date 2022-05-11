#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    int dp[41] = {1,1};

    for(int i = 2;i<41;i++)
        dp[i] = dp[i-1] + dp[i-2];

    int n;

    for(int i = 0;i<t;i++)
    {
        cin >> n; 
        if(n==0)
            printf("1 0\n");
        else if(n==1)
            printf("0 1\n");
        else
            printf("%d %d\n",dp[n-2],dp[n-1]);
    }
}