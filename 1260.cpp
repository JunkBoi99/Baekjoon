#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX_V 1001

int n,m,v;
int c[MAX_V];
vector<int> a[MAX_V];

void reset()
{
    for(int i = 0;i<n;i++)
        c[i] = 0;
}

void dfs(int v)
{
    if(c[v]) return;
    c[v] = true;
    cout << v << ' ';
    for(int i = 0; i<a[v].size();i++)
    {
        int y = a[v][i];
        dfs(y);
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    c[v] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i = 0; i<a[x].size();i++)
        {
            int y = a[x][i];
            if(!c[y])
            {
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main()
{
    int fx,fy;
    cin >> n >> m >> v;
    for(int i = 1;i<=m;i++)
    {
        cin >> fx >> fy;
        a[fx].push_back(fy);
        a[fy].push_back(fx);
    }
    dfs(v);
    reset();
    cout << '\n';
    bfs(v);
}