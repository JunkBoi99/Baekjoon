#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int, int> b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    int n,x,y;
    vector<pair<int,int>> arr;
    while(n--)
    {
        scanf("%d %d",&x,&y);
        arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(),arr.end(),compare);
    for(pair<int,int> a : arr)
    {
        printf("%d %d\n",a.first,a.second);
    }
}