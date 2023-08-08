#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int t,sum=0,p,q=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a[i];
        sum+=a[i];
    }
   
    for (int i = 0; i < t; i++)
    {
       if(a[i]!=0){
           q++;
       }
    }
    p = sum - q;
    cout<<t<<" "<<p;


return 0;
}
