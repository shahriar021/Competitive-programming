#include<bits/stdc++.h>
using namespace std;


bool sb(int arr[],int n,int sum){

    int l,r;
    l=0;
    r=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==sum){
            return true;
        }
        

    }
    return false;


}

int main(){

        int arr[100000];
        int n,sum;
        cin>>n>>sum;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(sb(arr,n,sum)){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }


}