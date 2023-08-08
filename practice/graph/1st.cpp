#include<bits/stdc++.h>
using namespace std;

vector <int>adj[100005];
int n,e;

int main(){
    scanf("%d %d",&n,&e);
    for(int i=0;i<e;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int j=1;j<=n;j++){
    for(int i=0;i<adj[j].size();i++){
        printf("%d-> ",adj[j][i]);
    }
    cout<<endl;
    }
    /*cout<<endl;
    cout<<"size"<<endl;
    cout<<adj[4].size()<<endl;
    return 0;
    */
}