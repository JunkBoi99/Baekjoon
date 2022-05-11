#include <cstdio>

int main()
{
    while(1)
    {
        char a[5];
        scanf("%s",a);
        if(a[0]=='0') break;
        int l = 0;
        for(l = 0;a[l];++l);
        for(int i = 0;i<l;i++) if(a[i]!=a[l-1-i]) l = 0;
        puts(l?"yes" : "no");
    }
}