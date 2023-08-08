class Solution
{
    const int inf = 1e8;
    vector<vector<int>> dp,vis;
public:

    int go(int x,int y,vector<vector<int>> &A){
        if(x==A.size())
            return 0;
        if(y==A[0].size() || y==-1)
            return inf;

        int &ans = dp[x][y];
        if(vis[x][y]) return ans;

        ans = min(ans,A[x][y] + go(x+1,y,A));

        ans = min(ans, A[x][y] + go(x + 1, y-1, A));

        ans = min(ans, A[x][y] + go(x + 1, y+1, A));

        vis[x][y] = 1;

        return ans;
    }

    int minFallingPathSum(vector<vector<int>> &m)
    {   
        if(m.empty())
            return 0;
        int r=m.size();
        int c = m[0].size();
        dp.resize(r,vector<int> (c,INT_MAX));
        vis.resize(r,vector<int>(c,0));
        int ans= INT_MAX;

        for (int i = 0; i < c; i++)
        {
            ans=min(ans,go(0,i,m));
        }
        return ans;
        

    }
};