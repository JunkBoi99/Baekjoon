/*
#include <cstdio>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",(a+c/60+(b+c%60)/60)%24,(b+c%60)%60);
}
*/
#include <cstdio>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d",(a+b/60)%24,(b+=c)%60);
    //b+=c에 의해 b가 출력전 증가됨!
}