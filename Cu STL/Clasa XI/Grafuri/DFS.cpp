#include <bits/stdc++.h>
using namespace std;

vector<int> g[105];
bool viz[105];
int x, y, start, n, m;

void dfs(int x)
{
    viz[x] = 1;
    cout<<x<<' ';
    for(size_t i=0; i<g[x].size(); i++)
        if(!viz[g[x][i]])
            dfs(g[x][i]);
}

int main()
{
    cin>>n>>m>>start;
    for(int i=1; i<=m; i++)
    {
        fin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
        sort(g[i].begin(), g[i].end());
    dfs(start);
    return 0;
}
