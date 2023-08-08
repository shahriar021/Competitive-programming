#include<iostream>
using namespace std;

int main()
{
    int arr[10000];
    int n,l,r,sum,q,p,x;
   
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cin>>q>>p;
    for(int i=1;i<=q;i++){
    cin>>l>>r>>x;
    sum=0;
    for (int i = l; i <= r; i++)
    {
        sum+=arr[i];
    
    if(arr[i]==0){
    cout << (sum+x) << endl;
    }
    else{
        cout<<sum<<endl;
    }
    }
    }

    return 0;

}