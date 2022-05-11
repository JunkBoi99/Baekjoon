#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,a,b,max_ = 0,lb,ub;
    vector<int> lines_x;
    vector<int> lines_y;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            swap(a,b);
        lines_x.push_back(a); lines_y.push_back(b);
        if(a < lb)
            lb = a;
        if(b > ub)
            ub = b;
    }
    for(int i = lb;i<=ub;i++)
    {
        int temp = 0;
        for(int c = 0;c<n;c++)
        {
            if(lines_x[c] <= i && i <= lines_y[c]) 
                temp++;  
        }
        if(temp > max_)
            max_ = temp;
    }
    printf("%d",max_);
}