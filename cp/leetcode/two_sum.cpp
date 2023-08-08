#include<bits/stdc++.h>
using namespace std;

void sum(int *arr,int targrt){
    for(int i=1;i<=sizeof(arr);i++){
        for(int j=0;j<i;j++){
            if((arr[j]+arr[i])==targrt){
                cout<<"["<<j<<","<<i<<"]";
            }
        }
    }

}

int main(){

    int arr[10000],n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    sum(arr,m);
    return 0;

}