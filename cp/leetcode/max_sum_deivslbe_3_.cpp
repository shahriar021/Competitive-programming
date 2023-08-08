
class Solution
{
public:
    int maxSumDivThree(vector<int> &nums)
    {
        int n=nums.size();
        int dp[n+1];
        int s=0;
        for (int  i = 0; i < n; i++)
        {
            if ((s += nums[i]) % 3 == 0)
            {
                dp[i]=max(dp[i],s);
            }
        }
       
        return dp[n];
    }
};