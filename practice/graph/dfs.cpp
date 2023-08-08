#include<bits/stdc++.h>
using namespace std;
#define GRAY 0
#define white 1
#define GREEN 2
#define BLACK 3
vector<int> adj[100000000];
int col[1000000];
int d[1000000];
int f[1000000];
int tme;
void dfs(int u){
    
    col[u]=GRAY;
    tme++;
    d[u]=tme;
    int v;
    for (int i = 0; i < adj[u].size(); i++)
    {
        v=adj[u][i];
        if(col[v]==white){
            printf("%d->%d--TREE edge\n",u,v);
            dfs(v);
        }
        else if(col[v]==GREEN){
            printf("%d->%d--BACK edge\n",u,v);
        }
        else{
            if(d[u]<d[v])printf("%d->%d--forward edge\n",u,v);
            else printf("%d->%d--cross edge\n",u,v);
        }
    }
    col[u]=BLACK;
    tme++;
    f[u]=tme;

}

int main(){
    int u,v,n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(1);
    return 0;

}