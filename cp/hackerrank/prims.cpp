#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

int n,m;
bool visited[100009];
vector<pii>graph[100009];

int prims(int n){
    int c=0; int sum = 0,cnt = 1;
    priority_queue<pii>node;
    visited[n] = true;
    for(int i = 0;i < (int)graph[n].size();i++){
        node.push(make_pair(-graph[n][i].second,graph[n][i].first));
    }
    while(cnt < n){
        pii t = node.top();
        int u = t.second;
        int w = t.first;
        node.pop();
        if(!visited[u]){
            sum += w;
            visited[u] = true;
            cnt++;
            for(int i = 0;i < (int)graph[u].size();i++){
                node.push(make_pair(-graph[u][i].second,graph[u][i].first));
            }
        }
    }
    c=abs(sum);
    return c;
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int start;
    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        graph[u].push_back(make_pair(v,w));
        graph[v].push_back(make_pair(u,w));
    }
   // cin>>start;
    printf("%d\n",prims(n));
    return 0;
}