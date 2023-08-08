#include<bits/stdc++.h>
using namespace std;

#define INF -10000000
vector<int> adj[2000005];
int dis[1000000];
int n,e,u,v;
queue<int>q;

void bfs(int s){
    
   dis[s]=0;
   q.push(s);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(dis[v]==INF){
                dis[v]=dis[u]+1;
                q.push(v);
            }

        }
    }

}

int main(){
     int count=0;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    for(int i=1;i<=n;i++){
        if(dis[i]==INF){
            bfs(i);
            count++;
        }
    }
    cout<<count-1<<endl;
    return 0;



}