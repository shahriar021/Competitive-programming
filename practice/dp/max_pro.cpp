#include<bits/stdc++.h>
using namespace std;
int max_pro(int n,int arr[]){
    int p_1=1,p_2=1,p_3=1,main=1;
    int look[n+1];
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p_1=p_1*arr[i];
            look[i]=arr[i];
        }
        if (arr[i] < 0)
        {
            p_2 = p_1 * arr[i];
            if(p_2>0){
                p_3=p_2;
                look[i] = arr[i];
            }
           
        }
        main=p_3*p_1;
    }
    return main;

}

int main(){

    int n;
    int arr[10000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    cout<<max_pro(n,arr)<<endl;

    return 0;
    
}