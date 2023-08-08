#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> ans;
        int n,x=1,p;
        cin>>n;
        while(n){
            x*=10;
            p=n%x;
            if(p) ans.push_back(p);
            n-=p;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


}