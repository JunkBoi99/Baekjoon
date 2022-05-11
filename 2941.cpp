#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cro[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string str;
    cin >> str;
    int idx;
    for(int i = 0;i<8;i++)
    {
        while(1)
        {
            idx = str.find(cro[i]);
            if(idx == string::npos) break;
            str.replace(idx,cro[i].length(),".");
        }
    }
    cout << str.length();
}
    
