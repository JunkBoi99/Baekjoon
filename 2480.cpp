#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dice[3];
    cin >> dice[0] >> dice[1] >> dice[2];
    sort(dice,dice+3);

    if(dice[0] == dice[1] && dice[1] == dice[2])
        printf("%d",10000+dice[0]*1000);
    else if(dice[0] != dice[1] && dice[1] != dice[2] && dice[2] != dice[0])
        printf("%d",dice[2]*100);
    else
        printf("%d",1000 + dice[1]*100);
}

/*
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",a==b&&a==c?10000+a*1000:a==b||a==c?1000+a*100:b==c?1000+b*100:a>b?a*100:b>c?b*100:c*100);
} 
//a>b ? 이 부분은 허점을 이용한것
*/