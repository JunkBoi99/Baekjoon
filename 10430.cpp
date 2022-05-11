#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a+b)%c << endl << (a+b)%c << endl << (a*b)%c << endl << (a*b)%c;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<2;i++)
        cout << (a+b)%c << endl;
    for(int i=0;i<2;i++)
        cout << (a*b)%c << endl;
}
*/