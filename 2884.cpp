#include <cstdio>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    printf("%d %d",(h+24-(m<45))%24,(m+15)%60);
}
/*
#include <cstdio>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);

    if(m-45 >= 0)
    {
        printf("%d %d",h,m-45);
    }
    else
    {
        if(h==0)
            printf("23 %d",m+15);
        else
            printf("%d %d",h-1,m+15);
    }
}
*/