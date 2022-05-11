#include <cstdio>
#include <algorithm>
using namespace std;
#define N 2000000001

int main()
{
    long lines[N]={};
    long n,a,b,max_=0;
    scanf("%lld",&n);
    for(long i = 0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b); 
        if(a>b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        a += 1000000000;
        b += 1000000000;
        if(b>max_) 
            max_ = b+1;
        for(long j = a;j<=b;j++) 
            lines[j]++;
    }
    sort(lines,lines+max_);
    printf("%lld",lines[max_-1]);
    return 0;
}