#include<bits/stdc++.h>
using namespace std;

#define RED 1
#define BLACK 2
vector<int> adj[100005];
int col[1000005];
int n,e,a=0,b=0;
queue<int> q;
bool bipartite=true;
int bfs(int src){
    for (int i = 1; i <= n; i++)
    {
        col[i] = BLACK;
    }
    col[src]=0;
    a+=200;
    b+=500;
    q.push(src);
    int u,v;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(col[v]==BLACK){
                if(col[u]==RED)
                {
                    col[v]=0;
                    a+=200;
                    b+=500;
                }


                else{
                    col[v] = RED;
                    a+=500;
                    b+=200;
                }
                q.push(v);
               
            }
            else{
                if (col[u] == col[v])
                    bipartite = false;
            }
        }
    }
    if(b>a)return a;
    else return b;
   
}

int main(){
   cin>>n>>e;
    int u, v;

    for (int i = 0; i < e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    
    cout<<bfs(1)<<endl;
    

        return 0;
}
