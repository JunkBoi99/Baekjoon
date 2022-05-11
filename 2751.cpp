#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
    int n,a;
    std::vector<int> v;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    std::sort(v.begin(),v.end());
    for(int i = 0; i< v.size();i++)
        printf("%d\n",v[i]);
}