#include <cstdio>
#include <cmath>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double x,y;
        scanf("%lf %lf",&x,&y);
        double move,max=0; //max는 최대속도
        while(max*max < y-x)
            ++max;
        move = 2*max-1;
        double rem = y-x - max*max;
        rem = ceil(rem/max);
        move += rem;
        printf("%.lf\n",move);
    }
}