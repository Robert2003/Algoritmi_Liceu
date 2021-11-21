#include <bits/stdc++.h>
using namespace std;

vector<int> g[105];
bool viz[105];
int x, y, start, n, m;

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    viz[x] = 1;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<' ';
        for(size_t i=0; i<g[x].size(); i++)
            if(!viz[g[x][i]])
            {
                q.push(g[x][i]);
                viz[g[x][i]] = 1;
            }
    }
}

int main()
{
    cin>>n>>m>>start;
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
        sort(g[i].begin(), g[i].end());
    bfs(start);
    return 0;
}
