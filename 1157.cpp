#include <cstdio>
#include <string>
#include <cstring>
//iostream을 사용하면 메모리가 2배..
char s[1000001];

int main()
{
    scanf("%s",s);
    int alp[26] = {},len = strlen(s),select=0;
    for(int i = 0;i<len;i++)
    {
        s[i] = toupper(s[i]);
        alp[s[i]-65]++;
    }
    int max =0,flag = 0;

    for(int i = 0;i<26;i++)
    {
        if(max < alp[i])
        {
            max = alp[i];
            flag = 0;
            select = i;
        }
        if(max == alp[i])
            flag++; 
    }
    if(flag >1) printf("?");
    else    printf("%c",select+'A');
}
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int arr[26] = {}, max = 0, index = 0,count = 0;

    cin >> str;

    for(int i = 0;i<str.length();i++)
    {
        int n = str.at(i);
        if(n < 97)
            arr[n-65]++;
        else
            arr[n-97]++;
    }

    for(int i = 0;i<26;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i;
            count = 0;
        }
        
        if(max == arr[i])
            count++; 
    }

    cout << (count > 1 ? '?' : char(index+65));
}
*/