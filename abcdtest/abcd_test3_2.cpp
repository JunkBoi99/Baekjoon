#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
 	ios_base::sync_with_stdio(false);
  	int n,a,b,max_ = 0,lb = 1000000001,ub=-1000000001;
    int lines[1000000][2];
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> a >> b;
        if(a>b)
            swap(a,b);
        lines[i][0] = a; lines[i][1] = b;
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
            if(lines[c][0] <= i && i <= lines[c][1]) 
                temp++;  
        }
        if(temp > max_)
            max_ = temp;
    }
    cout << max_;
  	return 0;
}