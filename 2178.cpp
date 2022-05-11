#include <cstdio>

int map[101][101];
int mx[4] = {0,0,1,-1};
int my[4] = {1,-1,0,0};
int m,n,count=10000;

int issafe(int x, int y)
{
    if(x > 0 && x < m)
    {
        //if(y >)
    }
    return 0;
}

void travel(int x,int y,int tcount)
{
    if(x==n && y==m)
    {
        if(tcount < count)
            count = tcount;
    } 
    for(int i = 0;i<4;i++)
    {
        if(issafe(x+mx[x],y+my[i]))
            travel(x+mx[i],y+my[i],tcount+1);
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
            scanf("%d",&map[i][j]);
    }
    travel(1,1,0);
    printf("%d",count);
}