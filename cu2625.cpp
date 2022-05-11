#include <cstdio>

bool triangle(int a,int b, int c)
{
    if(a+b>c && b+c>a && c+a>b)
        return true;
    return false;
}

int main()
{
    int a,count = 0;
    scanf("%d",&a);

    for(int i = 1;i<=a/3;i++)
    {
        for(int j = i;j<=(a-i)/2;j++)
        {
            if(triangle(i,j,a-i-j))
                count++;
        }
    }
    printf("%d",count);
}