#include<bits/stdc++.h>
using namespace std;

int max_element(int n,int m){

    int arr[10000];
    int max=0;
    
    for(int i=n;i<m;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;

}

int main()
{
    int arr[]={9,4,7,2,5,10,11,12,1,3,6};
    int n,m;
    cin>>n>>m;
    cout<<max_element(n,m);
    return 0;

}