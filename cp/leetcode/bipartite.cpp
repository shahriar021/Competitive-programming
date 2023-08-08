#include<bits/stdc++.h>
using namespace std;

#define RED 1
#define GREEN 2
vector<int> adj[100005];
int col[1000005];
int n;
queue<int> q;
bool bipartite=true;
int bfs(int src){
    col[src]=RED;
    q.push(src);
    int u,v;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];
            if(col[v]==0){
                if(col[u]==RED)col[v]=GREEN;
                if (col[u] == GREEN)col[v] = RED;
                q.push(v);
               
            }
            else{
                if (col[u] == col[v])
                    bipartite = false;
            }
        }
    }
   return bipartite;
}

int main(){
    int n, e;
    int u, v;

    
  
        scanf("%d", &n);
       
        scanf("%d", &e);
        
        for (int i = 0; i < e; i++)
        {

            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(u);
        if (bipartite)
            cout << "true\n";
        else
            cout << "false\n";

        
    
    return 0;
}
