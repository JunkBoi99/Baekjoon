#include <cstdio>

int main()
{
    int n,i=0;
    scanf("%d",&n);

    for(;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            printf(" ");
        for(int k=0;k<=i;k++)
            printf("*");
        printf("\n");
    }
}