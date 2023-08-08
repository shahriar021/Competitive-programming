class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> output;
        vector<int> tmp;

        output.push_back({1});
        int i = 1;
        while (i < numRows)
        {
            tmp = output[i - 1];
            vector<int> cur;
            cur.push_back(1);
            for (int j = 0; j < tmp.size() - 1; j++)
                cur.push_back(tmp[j] + tmp[j + 1]);
            cur.push_back(1);
            output.push_back(cur);
            i++;
        }

        return output;
    }
};