#include <cstdio>

int main()
{
    int x,check=0;
    scanf("%d",&x);
    while(x>0){
        check++;
        x-=check;
    }
    if(check % 2) printf("%d/%d",1-x,check+x);
    else printf("%d/%d",check+x,1-x);
}