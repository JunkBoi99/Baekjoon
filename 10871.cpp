#include <cstdio>

int a,b,c,i=0;

int main()
{
    scanf("%d %d",&a,&b);
    for(;i<a;i++)
    {
        scanf("%d",&c);
        if(c<b)
            printf("%d ",c);
    }
}

//for문에서 초기식을 생략하는것만으로도 엄청난 시간 감축!