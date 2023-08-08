#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int  a[100000],b[100000];
    long long int k,n,c,d;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++){
        b[i]=a[i];
    }
    for (int i = 0; i < k; i++)
    {
       c=max(b[i],0);
    }
    for (int i = 0; i < k; i++)
    {
        d = min(b[i], b[0]);
    }
    cout<<c-d<<endl;
}