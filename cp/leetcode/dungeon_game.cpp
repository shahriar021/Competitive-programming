class Solution
{
public:
    int run(int x,int y){
        return x+1,y+1;
    }
    int calculateMinimumHP(vector<vector<int>> &d)
    {
        int n=d.size();
        int m=d[0].size();
        int dp[n][m];
        dp[n-1][m-1]=d[n-1][m-1]<0?(d[n-1][m-1]*-1+1):1;
        for(int i=n-1;i>=0;i--){
            for (int j = m-1; j>= 0; j--)
            {
                if(i==n-1 && j==m-1){
                    continue;
                }
                else if(i==n-1){
                    dp[i][j]=max(1,dp[i][j+1]-d[i][j]);
                }
                else if(j==m-1){
                    dp[i][j]=max(1,dp[i+1][j]-d[i][j]);
                }
                else{
                    dp[i][j]=max(1,min(dp[i+1][j],dp[i][j+1])-d[i][j]);
                }
            }
            
        }
        return dp[0][0];

    }
};