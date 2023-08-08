#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[100000];
    int n,t,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int p=INT_MAX,s=0;
    for(int i=0;i<n;i++){
        if(abs(arr[i]-arr[i-1]<p)){
            p=abs(arr[i]-arr[i-1]);
        }
        
    }
    cout<<p<<"\n";
    return 0;

}