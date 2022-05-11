#include <cstdio>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",(c>b ? a/(c-b)+1 : -1)); 
}