#include <bits/stdc++.h>
using namespace std;

int infinity = 1e8;
int n; //Number of players
int fee[1000];
int performance[1000];
int max_budget;
int dp[1001][1001];

int maxPerformance(int player_idx,int budget){
    if(player_idx >= n){
        if(budget <= max_budget)return 0;
        else return -infinity;
    }
    if(dp[player_idx][budget] != -1)return dp[player_idx][budget];
    
    int t1 = 0,t2 = 0;
    t1 = performance[player_idx] + maxPerformance(player_idx + 1,budget + fee[player_idx]);
    t2 = maxPerformance(player_idx + 1,budget);

    dp[player_idx][budget] = max(t1,t2);

    return dp[player_idx][budget];
}

int main()
{
    

    memset(dp,-1,sizeof(dp));

    cin>>n>>max_budget;
    for(int i = 0;i < n;i++)cin>>fee[i];
    for(int i = 0;i < n;i++)cin>>performance[i];

    cout<<"Maximum sum of performance : "<<maxPerformance(0,0)<<"\n";
    
    return 0;
}