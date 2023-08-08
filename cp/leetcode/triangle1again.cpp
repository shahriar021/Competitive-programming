class Solution
{
public:
   

    int minimumTotal(vector<vector<int>> &m)
    {
        int n=m.size();
        vector<vector<int>>dp(n,vector<int>(n,0));

        int i=0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; i < m[i].size(); j++)
            {
                if(j==0){
                    dp[i][j]=dp[i-1][j]+m[i][j];
                }
                else if(j==m[i].size()-1){
                    dp[i][j]=dp[i-1][j-1]+m[i][j];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+m[i][j];
                }
            }
            
        }
        int x;
        for (int q = 0; q <m[i-1].size() ; q++)
        {
            x=min(x,dp[n-1][a]);
        }
        return x;
        
        
    }
};