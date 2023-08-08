#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int a=arr[0],t=0;;
    for(int i=0;i<n;i++){
        if(arr[i]-a>4){
            t++;
            a=arr[i];
        }
    }

    cout<<t+1<<"\n";
    return 0;


}