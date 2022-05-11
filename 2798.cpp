#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,arr[101],max=0,ans;
    cin >> n >> m;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int k = 0;k<n;k++)
    {
        for(int j = k+1;j<n;j++)
        {
            for(int l = j+1;l<n;l++)
            {
                ans = arr[k]+arr[j]+arr[l];
                if(ans <= m && ans>max)
                    max = ans;
            }
        }
    }
    cout << max;
}