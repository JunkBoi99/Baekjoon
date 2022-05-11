#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string x, string y)
{
    if(x.length() != y.length())
        return x.length() < y.length();
    else
        return x < y;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    string a,temp;
    vector<string> arr;

    for(int i = 0;i<n;i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),compare);
    for(string i : arr)
    {
        if(temp == i) continue;
        cout << i << '\n';
        temp = i;
    }
}