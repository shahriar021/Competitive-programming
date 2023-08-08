class Solution
{
public:
    #define INT_min -9595959595
    #define INT_MAX 999999999999
    int maxProfit(vector<int> &p)
    {
        int n=p.size();
        int f=-1,f2=INT_MAX;
        for (int k = 1; k <= 2; k++)
        {
            /* code */
        
        
        for (int i = 0; i < n; i++)
        {
           f2=min(f,p[i]);
           f=max(f2,p[i]);
        }
    int a=0;
        for (int i = 0; i < n; i++)
        {
            a=max(a,a+(f-f2));
        }

        }
        return a;

        
    }
};