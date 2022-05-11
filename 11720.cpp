/*
#include <cstdio>
#include <cmath>

int main()
{
    int n,sum = 0;
    char arr[101];
    scanf("%d %s",&n,arr);
    for(int i = 0;i<n;i++)
        sum += arr[i] - '0';
    printf("%d",sum);
}
*/

#include <cstdio>

int c,s;

int main()
{
    scanf("%*d"); //입력 하나 날려버리기
    for(;scanf("%1d",&c)+1;s+=c); //for문 뒤에 ;를 바로 붙이면 반복문 밑에 내용 실행 X
    printf("%d",s);
}