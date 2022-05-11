#include <cstdio>

int main()
{
    int n,i=0,j;
    scanf("%d",&n);
    
    for(;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
}