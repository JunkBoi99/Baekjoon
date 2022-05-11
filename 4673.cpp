#include <cstdio>

int selfnum(int x)
{
    int a = x;
    while(x>0)
    {
        a += x%10;
        x/=10;
    }
    return a;
}

int main()
{
    int numbers[20001] = {};
    for(int i = 1;i<=10000;i++)
        numbers[selfnum(i)] = 1;
    for(int i = 1;i<=10000;i++)
        if(numbers[i]==0) printf("%d\n",i);        
}