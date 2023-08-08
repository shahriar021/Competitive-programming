class Solution
{
public:
    int maxCoins(vector<int> &nums)
    {   
        if(nums.empty()){
            return 0;
        }
        const int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n));

        for (int l = n - 1; l >= 0; l--)
        {
            for (int r = l; r < n; r++)
            {
                for (int i = l; i <= r; i++)
                {
                    dp[l][r] = max(dp[l][r], nums[i] * (l ? nums[l - 1] : 1) * (r == n - 1 ? 1 : nums[r + 1]) + (l <= i - 1 ? dp[l][i - 1] : 0) + (i + 1 <= r ? dp[i + 1][r] : 0));
                }
            }
        }

        return dp[0][n - 1];
    }
};