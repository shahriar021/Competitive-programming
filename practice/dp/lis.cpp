#include<bits/stdc++.h>
using namespace std;
int LIS(int n,int arr[]){
    int l[n];
    l[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;i++){
            if(arr[j]<arr[i] && l[j]>l[i]){
                l[i]=l[j];
            }
        }
        l[i]++;
    }
    int l2=INT_MIN;
    for(int c:l){
        l2=max(l2,c);
    }
    return l2;

}