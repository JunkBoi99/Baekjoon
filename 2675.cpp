#include <cstdio>
#include <cstring>

int main()
{
    int t,r;
    scanf("%d",&t);
    char s[21]= {};
    while(t--)
    {
        scanf("%d %s",&r,s);
        for(int i = 0;i<strlen(s);i++)
        {
            for(int j=0;j<r;j++)
                printf("%c",s[i]);
        }
        printf("\n");
    }    
}