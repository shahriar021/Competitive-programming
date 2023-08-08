class Solution
{
public:
    #define INT_MIN -99999999
    int lengthOfLIS(vector<int> &nums)
    {

        int n=nums.size();

        vector<int> dp(n, 1);
        for (int i = 1; i <=n; i++)
        {
            for (int j = 0; j <i; j++)
            {
                if(nums[i]>nums[j] && dp[j]>dp[i]){
                    dp[i]=dp[j];
                }
            }
            dp[i]++;
        }

        int lis=INT_MIN;
        for (int x:dp)
        {
           lis=max(lis,x);
        }
        return lis;
        
    }
};

/*
class Solution
{
public:
    #define INT_MIN -99999999
    int lengthOfLIS(vector<int> &nums)
    {

        int n=nums.size();

        vector<int> dp(n, 1);
        int ans=1;
        for (int i = 1; i <n; i++)
        {
            for (int j = 0; j <i; j++)
            {
                if(nums[i]>nums[j] ){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
           ans=max(ans,dp[i]);
        }
    return ans;
        
    }
};*/