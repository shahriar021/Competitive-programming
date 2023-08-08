#include<bits/stdc++.h>
using namespace std;

vector<int> graph[105];
bool visited[105];

vector<int> result;

void dfs(int s){
    visited[s]=1;
    for(int i=0;i<graph[s].size();i++){
        int next=graph[s][i];
        if(visited[next]==0){
            dfs(next);
        }
    }
    result.push_back(s);
}

int main(){

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            dfs(i);
        }
    }
    reverse(result.begin(),result.end());
   // cout<<"top_order:";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}