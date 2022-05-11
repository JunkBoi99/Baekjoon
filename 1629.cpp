#include <cstdio>
typedef long long ll;
ll pow(ll x, ll y, ll z)
{
    if(y==0)
        return 1;
    ll res = pow(x,y/2,z);
    res  = res * res %z;

    if(y%2 == 0)
        return res;
    else   
        return (res * x)%z;
}

int main()
{
    ll a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    
    printf("%lld",pow(a%c,b,c));
}