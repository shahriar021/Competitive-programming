#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    long int c=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>max){
           max=arr[i];
           c=1;
       }
    
    else{
      if (arr[i] == max)
       {
           c++;
       }
    }
    }
    
    cout<<c;
}