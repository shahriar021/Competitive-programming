#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[100];
    int n;
    int t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==t){
            cout<<"found";
        }
        else{
            cout<<"not in here";
        }
    }
    return 
0;}