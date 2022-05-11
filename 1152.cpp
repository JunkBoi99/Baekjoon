#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 0;
    while(cin >> str)
        ++count;
    cout << count;
}
//C++에서 string은 문자열을 공백을 기준으로 입력

/*#include <cstdio>
#include <cstring>

char s[1000001];

int main()
{
    int ans = 0,len;
    scanf("%[^\n]",s);
    len = strlen(s);
    if(len == 1 && s[0]==' ')
    {
        ans=-1;
    }
    
    for(int i = 1;i<len-1;i++) //1,len-1은 맨 앞 맨 뒤 공백 제거용
    {
        if(s[i]==' ')
            ans++;
    }
    printf("%d",ans+1);
}
*/