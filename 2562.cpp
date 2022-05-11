#include <cstdio>

int main()
{
    int a,max=0,count;

    for(int i=0;i<9;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max = a;
            count = i+1;
        }
    }
    printf("%d\n%d",max,count);
}