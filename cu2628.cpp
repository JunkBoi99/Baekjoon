/*
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b)
        swap(a,b);
    if(c>d)
        swap(c,d);    
    if(a>c)
    {
        swap(a,c);
        swap(b,d);
    }
    printf("%s",((a<c && c<b)?((d>b)?"cross" : "not cross"):"not cross"));    
}
*/

#include <cstdio>

int main()
{
    int a,b,c,d,t,k=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a<b) t = a, a = b, b = t;
    if(a<c || c<b) k++;
    if(a<d || d<b) k++;
    printf("%s",k==1 ? "cross" : "not cross");
}