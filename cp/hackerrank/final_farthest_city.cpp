#include<bits/stdc++.h>
using namespace std;
#define INF -100000

vector<int> adj[100000];
int dis[1000005];
int par[1000005];
queue<int>q;
int u,v,n,e,m,r;


int bfs(int s){
    
    for(int i=0;i<=n;i++){
        dis[i]=INF;
    }
    dis[s]=0;
    q.push(s);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            v=adj[u][i];
            if(dis[v]==INF){
                q.push(v);
                dis[v]=dis[u]+1;
                par[v]=u;
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
void path(int des){
    if(des==1){
        cout<<1<<endl;
        return;
    }
    path(par[des]);
    cout<<des<<" ";
}

int main(){
    int d;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>d;
    
    cout<<bfs(1)<<endl;

    path(d);
    return 0;
}