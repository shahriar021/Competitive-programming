#include<bits/stdc++.h>
using namespace std;
int lds(int n,int arr[]){

  
    int l[n];
    int max=0;
    for(int i=0;i<n;i++){
        l[i]=1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j] && l[j]+1>l[i]){
                l[i]=l[j]+1;
            }
        }
        l[i]++;
    }

    for(int i=0;i<n;i++){
        if(max<l[i]){
            max=l[i];
        }
    }
    return max;

}

int main(){

    int arr[100000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lds(n,arr);

    return 0;

}