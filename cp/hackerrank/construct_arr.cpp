#include<bits/stdc++.h>
using namespace std;

const int MOD 1000000007;


long c_A(int n,int k,int x){

    /*int arr[n];
    int c=0;
    arr[0]=1;
    arr[n-1]=x;
    for (int i = 1; i < n-2; i++)
    {
       for (int j = i; j <= k; j++)
       {
           arr[j]=k;
           c++;
       }
       
    }
    return c;*/

    const int MOD 1000000007;
    long long arr[n],brr[n];
    arr[0]=x==1?1:0;
    brr[0]=x==1?0:1;
    for (int i = 1; i < n; i++)
    {
        arr[i] = brr[i - 1] % MOD;
        //cout<<brr[i-1]<<" ";
        brr[i] = (arr[i - 1] * (k - 1) + brr[i - 1] * (k - 2)) % MOD;
    }

    return arr[n-1];

}

int main(){

    int n,k,x;
    int arr[100000];

    cin>>n>>k>>x;
    /*for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];

    }*/
    cout<<c_A(n,k,x)<<endl;

    return 0;
    

}