#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
#define N 50000*3
#define pb push_back
#define clr(a)  memset(a,0,sizeof(a))
using namespace std;
vector<int>v[N];
vector<int>store;
bool color[N];
void dfs(int u)
{
    color[u]=true;
    for(int i=0;i<v[u].size();i++)
    {
        int V=v[u][i];
        if(!color[V]) dfs(V);
    }
}
int main()
{
    int t;
    int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        clr(color);
        for(int i=0;i<=n;i++)   v[i].clear();
        store.clear();
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            v[x].pb(y);
        }
        int M=0;
        for(int i=1;i<=n;i++)
        {
            if(!color[i]) dfs(i),store.pb(i);
        }
        clr(color);
        M=0;
        for(int i=store.size()-1;i>=0;i--)
        {
            if(!color[store[i]])
            {
                dfs(store[i]);
                M++;
            }
        }
        cout<<M<<endl;
    }
}