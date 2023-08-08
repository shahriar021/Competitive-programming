#include<bits/stdc++.h>
//time(O(n))
//space(O(1))
using namespace std;

int sub(vector<int> &nums){

    int i,n=nums.size();

    vector<long long> dp(n+1,0);
    long long prevMAX= INT_MIN, curMAX;
    long long ans= INT_MIN;

    for(int i=0;i<n;i++){
        curMAX=nums[i];
        curMAX=max(curMAX,nums[i]+prevMAX);
        ans =max(ans,curMAX);
        prevMAX=curMAX;

    }
    return ans;
}