#include <cstdio>
int n,a;
int main()
{
    scanf("%d",&n);
    while(n>1){a++; n-=6*a;}
    printf("%d",a+1);
}