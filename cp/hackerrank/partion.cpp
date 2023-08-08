#include<bits/stdc++.h>
using namespace std;

bool sb(int ar[],int n,int sum){

    int look[n][sum];

    for(int i=0;i<=n;i++){
        look[i][0]=true;
    }
    for (int j = 1; j <= sum; j++)
    {
        look[0][j] = false;
    }
}