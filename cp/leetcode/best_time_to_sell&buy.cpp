class Solution
{
public:
    #define null 0
    int maxProfit(vector<int> &prices)
    {
        if(prices.size()==0)return 0;

        int profit =0;
        int min1=prices[0];
        for (int i = 0; i <prices.size()-1; i++)
        {
            if(prices[i+1]<=prices[i]){
                min1=min(min1,prices[i+1]);
            }
            else{
                profit=max(profit,prices[i+1]-min1);
            }
        }
        return profit;
        
    }
};