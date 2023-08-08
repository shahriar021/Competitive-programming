#include<bits/stdc++.h>
using namespace std;
#define INF -100000

vector<int> adj[100000];
int dis[100000];
queue<int>q;
int u,v,n,e,m,r;



int bfs(int s){
    
    for(int i=0;i<n;i++){
        dis[i]=INF;
    }
    
    while(!q.empty()){
        for(int i=1;i<=adj[u].size();i++){
            if(dis[v]==INF){
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
    m=0;
    for(int i=1;i<=n;i++){
        r=max(dis[i],dis[i+1]);
        if(m<r){
            m=r;
        }
    }
    return m;

}


int main(){
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<bfs(1)<<endl;
    return 0;
}