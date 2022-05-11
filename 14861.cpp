#include <cstdio>
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    printf("%c\n", "1243"[(i<0)+2*(j<0)]);
}
/*
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;

    if(x>0)
    {
        if(y>0)
            cout << 1;
        else    
            cout << 4;
    }
    else
    {
        if(y>0)
            cout << 2;
        else
            cout << 3;
    }
}
*/