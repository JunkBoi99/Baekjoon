#include <cstdio>

int hoiit(int x)
{
    int sum = 0;
    while (x>0)
    {
        sum += x%10;
        x/= 10;
    }
    return (sum>9)?hoiit(sum) : sum;    
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",hoiit(n));
}