#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     int arr[100];
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int p=0,z=0,m=0;
     for (int i = 0; i < n; i++)
     {
       if(arr[i]>0){
           p++;
       }
       else  if (arr[i] < 0)
       {
           m++;
       }
       else if (arr[i] == 0)
       {
           z++;
       }
     }
    double a;
    a=p/n;
    double b;
    b = m / n;
    double c;
    c = z / n;
    cout<<fixed<<setprecision(6)<<a<<endl;
    cout <<fixed<< setprecision(6) << b << endl;
    cout <<fixed<< setprecision(6) << c << endl;
    return 0;
}