#include <cstdio>

int main()
{
    int n,t;
    while(~scanf("%d",&n)) //개꿀
        t += n*n;
    printf("%d",t%10);
}