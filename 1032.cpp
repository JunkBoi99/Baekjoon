#include <cstdio>

char a[51],b[51];

int main()
{
    int n;
    scanf("%d %s",&n,a);
    while(--n)
    {
        scanf("%s",b);
        for(int i = 0;b[i];i++)
        {
            if(b[i]!=a[i]) a[i] = '?';
        }
    }
    printf("%s",a);
}

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str[50];

    cin >> n;

    for(int i = 0;i<n;i++)
        cin >> str[i];

    char c;

    for(int i = 0;i<str[0].length();i++)
    {
        c = str[0][i];
        for(int j = 0;j<n;j++)
        {
            if(c!=str[j][i])
            {
                c = '?';
                break;
            }
        }
        cout << c;
    }
}
*/