#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int ar[10];
    long int sum=0,n;
    cin>>n;
    for(long int i=0;i<n;i++){
        cin>>ar[i];
        
    }
    for (long int i = 0; i < n; i++)
    {
       sum+=ar[i];
    }
    cout<<sum<<endl;

    return 0;
}