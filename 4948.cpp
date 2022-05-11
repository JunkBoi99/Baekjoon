#include <cstdio>
#define max 246913
int arr[max] = {},n,count;
int main()
{
    for(int i = 2;i*i<max;i++)
    {
        if(arr[i]) continue;
        for(int j = i*i;j<max;j+=i)arr[j]=1;
    }
    scanf("%d",&n);
    while(n)
    {
        count = 0;
        for(int i = n+1;i<=2*n;i++)
            if(!arr[i]) count++;
        printf("%d\n",count);
        scanf("%d",&n);
    }
}