#include <cstdio>

int main()
{
    int a,count=0,remain[42]={};

    while(scanf("%d",&a)>0)
        remain[a%42]=1;
    for(int n : remain)
        count+=n;
    printf("%d",count);
}

//쉽게 생각하자