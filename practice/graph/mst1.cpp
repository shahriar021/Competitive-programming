#include<bits/stdc++.h>
using namespace std;
#define max 10000000

struct e{
    int u,v,w;
    bool operator<(const e &p) const{
        return w<p.w;
    }
};
int par[max];
vector<e>adj;
int find(int n){
    return par[n]==n ? n: find(par[n]);
}
int kruskal(int n){
    sort(adj.begin(),adj.end());
    for(int i=1;i<=n;i++){
        par[i]=i;
    }
    int c=0,s=0;
    for(int i=0;i<(int)adj.size();i++){
        int u=find(adj[i].u);
        int v=find(adj[i].v);
        if(u!=v){
            par[u]=v;
            c++;
            s+=adj[i].w;
            if(c==n-1){
                break;
            }
        }
    }
    return s;

}
int main(){
    int n,m,u,v,w;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        e g;
        g.u=u;
        g.v=v;
        g.w=w;
        adj.push_back(g);
    }
    cout<<kruskal(n)<<endl;
    return 0;
}