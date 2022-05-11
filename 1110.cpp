#include <cstdio>

int main()
{
    int a,count = 0;
    scanf("%d",&a);
    int n = a;

    while(1)
    {
        n = (n%10)*10 + (n/10 + n%10)%10;
        count++;

        if(n == a)
            break;
    }

    printf("%d",count);
}