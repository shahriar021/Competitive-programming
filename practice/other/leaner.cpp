#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    int ar[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>t;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==t){
            cout<<"found"<<endl;
        }
    }
    return 0;
}