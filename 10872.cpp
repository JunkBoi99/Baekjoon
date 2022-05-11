#include <cstdio>

int main()
{
    int n,a=1;
    scanf("%d",&n);
    while(n--)
        a *= n+1;
    printf("%d",a);
}
/*
#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = n-1;i>0;i--)
        n *= i;
    printf("%d",n==0 ? 1 : n);
}
*/
