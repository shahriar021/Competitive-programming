class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        int sz = coins.size();
        int dp[sz + 1][amount + 1];

        for (int i = 0; i <= sz; i++)
        {
            for (int j = 0; j <= amount; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = 0;
                }
                if (j == 0)
                {
                    dp[i][j] = 1;
                }
            }
        }
        for (int i = 1; i <= sz; i++)
        {
            for (int j = 0; j <= amount; j++)
            {
                if (coins[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[sz][amount];
    }
};