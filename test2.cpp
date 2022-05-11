#include <iostream>
using namespace std;
#define MAX_V 576718750

int a, b, number, lengmax = 0;

int dp[MAX_V];

int ubak(int x, int lengt)
{
    if(dp[x])
        return dp[x];    
    if(x==1)
        return lengt;
    if(x%2==0)
        return dp[x] = ubak(x/2,1)+1;
    else
        return dp[x] = ubak(3*x+1,1)+1;
}

int main()
{
    cin >> a >> b;
    for(int i = a;i<b;i++)
    {
        int temp = ubak(i,1);
        if(temp > lengmax)
        {
            number = i;
            lengmax = temp;
        }
    }
    printf("%d %d",number,lengmax);
}