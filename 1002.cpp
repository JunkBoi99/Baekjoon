#include <cstdio>
#include <cmath>

int main()
{
    int n,x1,y1,r1,x2,y2,r2,result;
    double dis, sum, dif;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dis = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        sum = r1+r2;
        dif = r1 > r2 ? r1-r2 : r2-r1;

        if(dis == 0 && r1 == r2)
            result = -1;
        else if(dis < sum && dif < dis)
            result = 2;
        else if(dis == sum || dis == dif)
            result = 1;
        else    
            result = 0;

        printf("%d\n",result);        
    }
}