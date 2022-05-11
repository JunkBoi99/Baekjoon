#include <cstdio>

int gcd(int x, int y)
{
    if(y)
        return gcd(y,x%y);
    return x;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}