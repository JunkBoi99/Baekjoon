#include <cstdio>
typedef long long ll;

int main()
{
    ll n,i,now=1,pre1=1,pre2=1;
    scanf("%lld",&n);
    for(i=2;i<=n;i++)
    {
        now = pre1 + pre2;
        pre2 = pre1;
        pre1 = now;
    }
    printf("%lld",now);
}