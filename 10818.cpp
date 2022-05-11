#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    scanf("%d",&n);

    int a,min = 1000001,max = -1000001;
    while(n--)
    {
        scanf("%d",&a);
        if(a<min)
            min = a;
        if(a>max)
            max = a;
    }
    printf("%d %d",min,max);
}
//입력이 클때는 iostream에 sync_with_stdio 해제를 해주자