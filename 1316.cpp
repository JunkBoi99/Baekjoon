#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n,count = 0;
    cin >> n;
    while(n--)
    {
        cin >> str;
        int arr[26] = {},flag=0;
        for(int i = 0;i<str.length();i++)
        {
            int idx = str[i]-'a';
            if(!arr[idx])
                arr[idx] = 1;
            else
            {
                if(str[i-1]!=str[i])
                {
                    flag = 1;
                }
            }
        }
        if(!flag) count++;
    }
    cout << count;
}