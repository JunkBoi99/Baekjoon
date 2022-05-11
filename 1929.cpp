#include <cstdio>
#include <vector>

int arr[1000001] = {1,1};

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i = 2;i*i<=n;i++)
    {
        if(arr[i]==1)
            continue;
        for(int j = i+i;j<=n;j+=i)
            arr[j] = 1;
    }
    for(int i = m;i<=n;i++)
        if(arr[i] == 0) printf("%d\n",i);
}