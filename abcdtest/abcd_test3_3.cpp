#include <iostream>
using namespace std;

struct lines
{
    int x;
    int y;
};

int main()
{
    int n,a,b;
    cin  >> n;
    while(n--)
    {
        cin >> a >> b;
        if(a>b)
            swap(a,b);
        
    }
}