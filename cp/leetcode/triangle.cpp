class Solution
{
public:
    //#define INT_MAX 99999999
    /*int min(int a,int b){
        return a>b?a:b;
    }*/

    int minimumTotal(vector<vector<int>> &m)
    {
        int n = m.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        dp[0][0]=m[0][0];
        int i=0;
        for(i=1;i<n;i++){
            for (int j = 0; j <m[i].size(); j++)
            {
                if(j==0)
                    dp[i][j]=dp[i-1][j]+m[i][j];
                else if(j==m[i].size()-1)
                    dp[i][j]=dp[i-1][j-1]+m[i][j];
                else
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+m[i][j];
            }
            
        }
        int x=INT_MAX;
        for (int a = 0; a <m[i-1].size(); a++)
        {
            x=min(x,dp[n-1][a]);
        }
        return x;
        
    }
};
/*
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        dp[0][0] = triangle[0][0];
        int i = 0;
        for (i = 1; i < n; i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (j == 0)
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                else if (j == triangle[i].size() - 1)
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                else
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j];
            }
        }
        int x = INT_MAX;
        for (int k = 0; k < triangle[i - 1].size(); k++)
        {
            x = min(x, dp[n - 1][k]);
        }
        return x;
    }
};*/