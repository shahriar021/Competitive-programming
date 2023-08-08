#include<bits/stdc++.h>
using namespace std;

int equal(vector<int> arr){

   auto min_ = *min_element(arr.begin(),arr.end());
   auto ans = numeric_limits<int>::max();
   for(auto i=0;i<5;i++){

       auto operations = [min_,i](auto init,auto j){
           auto t=j-(min_ -i);
           return init + t/5 + t%5/2 +t%5%2;
       };
       ans = min(ans,accumulate (arr.begin(),arr.end(),0,operations));
   }
   return ans;
    

}

int main(){

    int t,n;
    int arr[10000];
    vector<int> p;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            p.push_back(arr[i]);
        }
        
    
    cout<<equal(n,arr)<<endl;
    }
    return 0;

}