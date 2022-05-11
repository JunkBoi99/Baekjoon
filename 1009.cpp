#include <cstdio>
#include <cmath>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        int ans = 1;
        scanf("%d %d",&a,&b);
        b = (b%4 == 0 ? 4 : b%=4);
        while(b--) ans *= a;
        printf("%d\n",ans%10?ans%10:10);
    }
}