#include <bits/stdc++.h>
using namespace std;

int INFINITE = -1;
int dis[200007], n, e;
queue<int> q;
vector<int> adj[200007];

void BFS(int src)
{
    dis[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if (dis[v] == INFINITE)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}

int connectedRoad(int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INFINITE;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INFINITE)
        {
            BFS(i);
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> e;
    int u, v;
    while (e--)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(1);
    cout << connectedRoad(n) - 1 << endl;
}