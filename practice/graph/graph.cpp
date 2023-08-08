#include<bits/stdc++.h>
using namespace std;
#define INF 100000000
vector<int>adj[1000005];
int dis[10000005];
int n,e;

void bfs(int src){
    queue<int> q;
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    dis[src]=0;
    q.push(src);
    int par[src]=src;
    int v;
    while(!q.empty()){

        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(dis[v]==INF){
                dis[v]=dis[u]+1;
                q.push(v);
                par[v]=u;
            }
        }
        cout << dis[v];
    }

    
}    

int main(){
    int u,v;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(u);
    /*for(int i=1;i<=n;i++){
        for(int j=0;j<adj[i].size();j++){
            printf("%d-> ",adj[i][j]);
        }
        cout<<endl;
    }*/
    return 0;
}