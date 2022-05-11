#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n,k,a,count=0;
    vector<int> arr;
    scanf("%d %d", &n, &k);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a);
        arr.push_back(a);
    }
    for(int i = 0;i<n-1;i++)
    {
        int temp = arr[i];
        for(int j = i+1;j<=n;j++)
        {
            temp += arr[j];
            if(temp >= 4)
            {
                if(temp == 4)
                    count++;
                break;
            }
        }   
    }
    printf("%d",count);
}