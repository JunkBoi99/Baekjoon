#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n,a,sum=0,freq = 0,mostfreq;
    vector<int> arr;
    vector<int> freqq;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a);
        arr.push_back(a);
        sum += a;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == arr[i+1])
            freq++;
        else
        {
            freqq.push_back(make_pair(i,freq));
            freq = 1;
        }
    }
    sort(freqq.begin(),freqq.end(),greater<int>());
    if(freqq.size()>1 && freqq[0] == 1)
        freq = freqq[n-1];
    printf("%.f\n%d\n%d\n%d",float(sum/n),arr[n/2],freq,arr[n-1]-arr[0]);
}