#include <cstdio>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a = 100*(a%10) + 10*((a%100)/10) + a/100;
    b = 100*(b%10) + 10*((b%100)/10) + b/100;
    printf("%d",a<b? b : a);
}