#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[1000];
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        cin>>arr[i];
    }
    for (int j = 1; j <= n ; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}