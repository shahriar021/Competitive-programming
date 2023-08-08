#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,c=0,sum=0;
    long long int k;
    long long int arr[100000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(k>=(sum+=arr[i])){
            
            c++;
        }
    }
    cout<<c<<endl;;


}