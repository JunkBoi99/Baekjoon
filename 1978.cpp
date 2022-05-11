#include <cstdio>

int prime(int x)
{
    if(x==1)
        return 0;
    for(int i = 2;i*i<=x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,a,count = 0;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&a);
        if(prime(a)) count ++;
    }
    printf("%d",count);
}