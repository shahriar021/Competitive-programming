#include<bits/stdc++.h>
using namespace std;

int game(int arr[],int n){

        int t=0,p=0;
        for (int i = 2; i <= n; i++)
        {
            if(arr[0]+arr[n-1]>arr[i]){
                 p=max(t+arr[i],p);
            }
        }

        return p;
        

}

int main(){

    int t,n;
    int ara[10000];
    cin>>t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>ara[i];
    }

    cout<<game(ara,n)<<endl;

    return 0;
    
}