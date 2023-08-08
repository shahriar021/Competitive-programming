#include <bits/stdc++.h>
using namespace std;

int nodes, e;
vector<int> adj[100010];
int column1[100010];
int column2[100010];
int C1 = 0, C2 = 0;
queue<int> q;
int isBicolorable = 1;

void bfs(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        column1[i] = 2;
    }
    column1[src] = 0;
    C1 += 200;
    C2 += 500;

    q.push(src);
    int u, v;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            v = adj[u][i];
            if (column1[v] == 2)
            {
                if (column1[u] == 1)
                {
                    column1[v] = 0;
                    C1 += 200;
                    C2 += 500;
                }
                else
                {
                    column1[v] = 1;
                    C1 += 500;
                    C2 += 200;
                }
                q.push(v);
            }
            else
            {

                if (column1[u] == column1[v])
                {
                    isBicolorable = 0;
                }
            }
        }
    }

    if (C2 > C1)
    {
        cout << C1 << endl;
    }
    else
        cout << C2 << endl;
}

int main()
{
    scanf("%d %d", &nodes, &e);
    int u, v;

    for (int i = 0; i < e; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src = 1;
    bfs(src);

    return 0;
}