#include <cstdio>

int map[51][51];

int main()
{
    int n,m;
    char temp;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            scanf("%c",temp);
            if(temp == 'W')
                map[i][j] = 1;
            else    
                map[i][j] = 0;
        }
    }
    
}