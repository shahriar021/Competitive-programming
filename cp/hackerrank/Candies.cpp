#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[100000];
    int n,c=1,d=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
       for(int j=0;j<i;j++){
           if(a[j]<a[i]){
               c++;
               if(a[j]==a[i]){
                   d++;
               }
           }
       }
    }
    cout<<c+d<<"\n";
}