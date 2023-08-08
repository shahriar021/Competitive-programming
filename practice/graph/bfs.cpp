#include<bits/stdc++.h>

using namespace std;

template<typename T>
class graph{

    map<T,list<T>>l;
public:
    void addedge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);

    }

    void bfs(T src){
        map<T,int > visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            T node=q.front();
            q.pop();
            cout<<node<<" ";
            for(int nbr:l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]= true;
                }
            }

        }
    }

};

int main(){
    graph<int> g;
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        int u,v;
        cin>>u>>v;
        g.addedge.push_back(u,v);

    }
    g.bfs(0);


}