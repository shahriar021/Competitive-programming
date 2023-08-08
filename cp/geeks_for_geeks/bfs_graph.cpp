#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int n, vector<int> g[])
{
    vector<int> ans;
    int visited[n] = {0};

    queue<int> q;
    int s = 0;
    if (visited[s] == 0)
    {
        ans.push_back(s);
        q.push(s);
        visited[s] = 1;
    }
    while (!q.empty())
    {
        int u = q.front();
        //ans.push_back(u);
        q.pop();
        if (visited[u] == 0)
        {
            ans.push_back(u);
        }
        visited[u] = 1;
        for (auto x : g[u])
        {
            if (!visited[x])
            {
                q.push(x);
            }
        }
    }
    return ans;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int V,E;
        cin>>V>>E;
        vector<int> adj[V];
        for(int i=0;i<E;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        vector<int> ans = bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;


}