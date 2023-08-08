class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        vector<int> temp(rating.size());
        int ans = 0;
        for (int i = 1; i < rating.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < i; j++)
            {
                if (rating[i] > rating[j])
                {
                    count++;
                    ans += temp[j];
                }
            }
            temp[i] = count;
        }
        vector<int> temp1(rating.size());
        for (int i = rating.size() - 2; i >= 0; i--)
        {
            int count = 0;
            for (int j = rating.size() - 1; j > i; j--)
            {
                if (rating[i] > rating[j])
                {
                    count++;
                    ans += temp1[j];
                }
            }
            temp1[i] = count;
        }
        return ans;
    }
};