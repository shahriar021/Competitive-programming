#include<bits/stdc++.h>
using namespace std;
int LIS(vector<int> a,vector<int> b){

    int sum[a.size()];

    for(size_t i=0;i<a.size();i++){
        sum[i]=b[i];
        for(size_t j=0;j<i;j++){
            if(a[i]<a[j]){
                sum[i]=max(sum[i],sum[j]+b[i]);
            }
        }
    }

    return *max_element(sum,sum+a.size());

}
int main(){

   
    int T,n;
    
    cin>>T;
   for(int t=1;t<=T;t++){
       
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int lds = LIS(a, b);
        reverse(a.begin(), a.end()), reverse(b.begin(), b.end());
        int lis = LIS(a, b);
        if(lis>=lds){
            printf("Case %d. Increasing (%d). Decreasing (%d).\n",t,lis,lds);
        }
        else{
            printf("Case %d. Decreasing (%d). Increasing (%d).\n",t,lds,lis);
        }

    }

return 0;
}