#include<iostream>

using namespace std;

int main()
{

    int ar[2000],t,n,sum;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        sum=0;
        for(int j=0;j<n;j++){
            cin>>ar[j];
            sum+=ar[j];
            
        }
        
        if(sum%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }


return 0;
}