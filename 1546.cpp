#include <iostream>
using namespace std;

int n,s,f;
double sum;
int main()
{
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> s;
        sum+=s;
        if(s>f)
            f=s;
    }
    cout << (sum/n*100/f);
}