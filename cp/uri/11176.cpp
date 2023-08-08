#include<bits/stdc++.h>
using namespace std;
#define max 100000000

struct eg{
    int u,v,w;
    bool operator<(const eg &p) const{
        return w<p.w;
    }
};
int par[max];
vector<eg> graph;
int find(int r){
    if(par[r]==r){
        return r;
    }
    return find(par[r]);
}
int kruskal(int n){
    sort(graph.begin(),graph.end());
    for (int i = 1; i <=n; i++)
    {
        par[i]=i;
    }
    int c=0,s=0;
    for(int i=0;i<(int)graph.size();i++){
        int u=find(graph[i].u);
        int v=find(graph[i].v);
        if(u!=v){
            par[u]=v;
            c++;
            s+=graph[i].w;
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
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        eg h;
        h.u=u;
        h.v=v;
        h,w=w;
        graph.push_back(h);
    }
    cout<<kruskal(n)<<endl;
    return 0;
}