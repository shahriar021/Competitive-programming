#include<bits/stdc++.h>
using namespace std;

int ara[100000];
int n;

void merge(int ara[],int n){
    if(n==1){
        return;
    }
    int left=n/2;
    int right=n-left;
    int l[left];
    int r[right];
    for(int i=0;i<left;i++){
        l[i]=ara[i];
    }
    for (int i = left; i < right; i++)
    {
        r[i-left] = ara[i];
    }
    merge(l,left);
    merge(r,right);
    int lm=0;
    int rm=0;
    int ind=0;
    while(lm<left && rm< right){
        if(l[lm]<=r[rm]){
            ara[ind]=l[lm];
            ind++;
            lm++;
        }
        else{
            ara[ind]=r[rm];
            ind++;
            rm++;
        }
    }
    while(lm<left){
        ara[ind]=l[lm];
        ind++;
        lm++;
    }
    while(rm<right){
        ara[ind]=r[rm];
        ind++;
        rm++;
    }
}

int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    merge(ara,n);
    for (int i = 0; i < n; i++)
    {
        cout<< ara[i]<<" ";
    }
}