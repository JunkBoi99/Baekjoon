#include <cstdio>

int t,x;
int main()
{
    while(~scanf("%d",&x))
        t = t*10 + x;
    puts(t == 12345678 ? "ascending" : t == 87654321 ? "descending" : "mixed");
}
/*#include <cstdio>

int main()
{
    int num[8],check = 0;
    scanf("%d",&num[0]);
    for(int i = 1;i<8;i++)
    {
        scanf("%d",&num[i]);
        if((num[i]-num[i-1]) == 1)
            check++;
        else if((num[i]-num[i-1]) == -1)
            check--;
        else
            check = 0;
    }

    if(check == 7)
        printf("ascending");
    else if(check == -7)
        printf("descending");
    else
        printf("mixed");
}
*/