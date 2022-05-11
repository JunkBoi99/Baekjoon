#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}
//https://www.acmicpc.net/board/view/22716
//cin.tie와 sync_with_stdio에 대한 설명