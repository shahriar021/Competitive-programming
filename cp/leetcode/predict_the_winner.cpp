class Solution {
public:
    #define lli long long int 
    lli dp[25][25];
    lli solve(vector<int>& v,lli l,lli r){
        if(l>r) return 0;
        if(dp[l][r]!=-1) return dp[l][r];
        if(l==r) return v[l];
        lli op1 = v[l]-solve(v,l+1,r);
        lli op2 = v[r]-solve(v,l,r-1);
        return dp[l][r]=max(op1,op2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        lli score = solve(nums,0,nums.size()-1);
        return score>=0;
    }
};