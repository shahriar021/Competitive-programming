#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {

        
        int n=nums.size();
        int ppMax,pMax,cMax;
        ppMax=pMax=cMax=0;
        for(int i=0;i<n;i++){
            cMax=pMax;
            cMax=max(cMax,nums[i]+ppMax);

            ppMax=pMax;
            pMax=cMax;
        } 

        return cMax;     
}

int rob(vector<int>& nums) {

        int t,s_1=0,s_2=0;
        int n=nums.size();
        for(int i=0;i<n;i=i+2){
            s_1+=nums[i];
        } 

        for(int i=1;i<=n;i=i+2){
            s_2+=nums[i];
        }  

         t=max(s_1,s_2);
        return t;     
}