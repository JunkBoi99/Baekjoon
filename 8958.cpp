#include <cstdio>

int main()
{   
    int t,sum,score;
    scanf("%d",&t);

    char rawt[81]={};

    while(t--)
    {
        scanf("%s",rawt);
        sum = score = 0;
        for(int i = 0;i<rawt[i];i++)
            rawt[i] == 'O' ? sum += ++score : score = 0;
        printf("%d\n",sum);
    }
}