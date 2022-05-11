#include <cstdio>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int x = (a==c)?e:(c==e)?a:c;
    int y = (b==d)?f:(d==f)?b:d;
    printf("%d %d",x,y);
}