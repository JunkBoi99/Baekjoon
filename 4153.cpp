#include <cstdio>

bool tri(int a, int b, int c)
{
    int max;
    if(a>=b && a>=c){max=a; a = b;a=c;}
    else if(b>=a && b>=c){max = b; b=c;}
    else{max = c;}
    if(max*max == a*a + b*b) return true;
    else return false;    
}

int main()
{
    int x,y,z;
    while(1)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(!(x==0 && y==0 && z==0)) printf(tri(x,y,z)?"right\n":"wrong\n");
        else break;
    } 
}