#include<bits/stdc++.h>
using namespace std;

int knap(int v[],int w[],int n,int W){

    int T[n+1][W+1];
    for(int j=0;j<n;j++){
        T[0][j]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=W;j++){
            if(w[i-1]>j){
                T[i][j]=T[i-1][j];
            }
            else{
                T[i][j]=max(T[i-1][j],T[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }
    return T[n][W];

}

int main(){
    /*int v[1000];
    int w[1000],n,W;

    cin>>n>>W;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        cin>>w[i];
    }
    cout<<knap(v, w,  n,  W);
    return 0;*/
    int v[] = {20, 5, 10, 40, 15, 25};
    int w[] = {1, 2, 3, 8, 7, 4};

    // knapsack capacity
    int W = 10;

    // total number of items
    int n = sizeof(v) / sizeof(v[0]);

    cout << "Knapsack value is " << knap(v, w, n, W);

    return 0;
}