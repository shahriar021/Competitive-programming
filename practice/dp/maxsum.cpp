#include<bits/stdc++.h>
using namespace std;

int maxSum(int n,int arr[]){

    int sum[n]={0};
    sum[0]=arr[0];

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(sum[i]<sum[j] && arr[i]>arr[j]){
                sum[i]=sum[j];
            }
        }
        sum[i]+=arr[i];
    }
    int all=INT_MIN;
    for(int x:sum){
        all=max(x,all);
    }
    return all;

}

int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int k=0;k<n;k++){
        cin>>arr[k];
        
    }

    cout << maxSum(n,arr);
    return 0;
}