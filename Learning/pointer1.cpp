#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1,2,3,4};
    for(int i = 0;i<4;i++)
        scanf("%*d",&a[i]);
    for(int i = 0;i<4;i++)
        printf("%10d",a[i]);    
}