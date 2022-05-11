#include <cstdio>

int hansu(int x)
{
    if(x<100)
        return 1;
    int a,b,c;
    a = x/100;
    b = (x%100)/10;
    c = x%10;
    if(a-b == b-c)
        return 1;
    return 0;
}

int main()
{
    int n,count=0,i=1;
    scanf("%d",&n);
    for(;i<=n;i++)
        if(hansu(i))count++;
    printf("%d",count);
}