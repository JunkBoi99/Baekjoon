#include <iostream>
#include <string>
using namespace std;

int alpha[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

int main()
{
    string dial;
    cin >> dial;
    int count=0;
    for(int i = 0;i<dial.size();i++)
        count+=alpha[dial[i]-65];
    cout << count;
}