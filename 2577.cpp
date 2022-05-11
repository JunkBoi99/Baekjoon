#include <cstdio>

int num[10];

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int k = a*b*c;

    while(k != 0)
    {
        num[k%10]++;
        k/=10;
    }    

    for(int v : num)
        printf("%d\n",v);

}