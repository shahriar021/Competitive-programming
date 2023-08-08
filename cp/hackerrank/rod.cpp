#include<bits/stdc++.h>
using namespace std ;
int ROD(int p[],int n,int N){

    int look[n+1][N+1];

    for(int i=0;i<=n;i++){
        look[i]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=N;j++)
            if(look[i-1]>j){
                look[i][j]=look[i-1][j];
            }
            else{
                look[i][j]=
            }
    }

    return look[n][N];


}

int main(){
    int  l[10000],p[100000];
    int n,m;
    cin>>m>>n;
    
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    cout<<ROD(p,n);
    return 0;
}