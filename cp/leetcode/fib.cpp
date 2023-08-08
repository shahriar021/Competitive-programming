class Solution
{
public:
    int fib(int n)
    {
        int l[n + 2];
        
        l[0] = 0;
        l[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            l[i] = (i - 1) + (i - 2);
        }
        return l[n];
    }
};