class Solution
{
public:

   

    int mincostTickets(vector<int> &days, vector<int> &costs)
    {

        int n=days.size();

        vector<int> dp(n + 1, INT_MAX);
        dp[0]=0;
        //for 1 day........
        for (int i = 0; i < n; i++)
        {
            
        
        
            dp[i+1]=min(dp[i+1],dp[i]+costs[0]);

        //for 7 day............
        for (int j = i; j < n; j++)
        {
            if(days[j]>=days[i]+7)break;
            dp[j+1]=min(dp[j+1],dp[i]+costs[1]);
        }
        
        //for 30 days...........
        for(int j=i;j<n;j++){
            if(days[j]>=days[i]+30)break;
            dp[j+1]=min(dp[j+1],dp[i]+costs[2]);
        }

        }

        return dp[n];

    }
};