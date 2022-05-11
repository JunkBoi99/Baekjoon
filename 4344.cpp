#include <cstdio>

int main()
{
    int c, stud, scor[1001],i,s,ov;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&stud);
        for(i = s = ov = 0;i<stud;i++)
        {
            scanf("%d",&scor[i]);
            s += scor[i];
        }
        for(int i = 0;i<stud;i++)
        {
            if(scor[i] > s/stud)
                ov++;
        }
        printf("%.3f%%\n",100.f * ov/stud);
    }
}