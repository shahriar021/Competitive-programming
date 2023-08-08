#include<bits/stdc++.h>
using namespace std;
#define INF -100000
int n,e;
vector <int> adj[100005];
int dis[100005];
int mx,val;

queue<int> q;
int bfs(int s)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=INF;
    }
    dis[s]=0;
    q.push(s);
    int u,v;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size();i++)
        {
            v=adj[u][i];
            if(dis[v]==INF)
            {
                q.push(v);
               dis[v]=dis[u]+1;
               
            }
        }
    }
    mx=0;
    
    for (int i = 0; i <= n; i++)
    {
        val = max(dis[i], dis[i + 1]);
        if (mx < val)
            mx = val;
    }
    return mx;
}

int main()
{
    int u,v;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }

    cout<<bfs(1)<<endl;
    
    return 0;
}