#include<bits/stdc++.h>
using namespace std;

int dist[1001][1001];
int n,m;
int vis[1001][1001];

bool isvalid(int x,int y){

    if(x<1 || x>n || y<1 || y>m) return false;
    if(vis[x][y]==1) return false;

    return true;  
}

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int srcx,int srcy){

    queue<pair<int,int>>q;
    q.push({srcx,srcy});
    vis[srcx][srcy]=1;
    dist[srcx][srcy]=0;

    while(!q.empty()){

        
    }
}