class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> res;
        res.resize(n + 1);
        if (n == 0)
            return res;

        res[1] = 1;
        for (int i = 1; i <= n; i++)
            res[i] = res[i / 2] + res[i % 2];

        return res;
    }
};