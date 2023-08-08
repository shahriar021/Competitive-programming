#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a[100];
    double n;
    
    for(int i=0;i<100;i++){
        cin>>a[i];
    }
    for(int i=0;i<100;i++){
        if(a[i]<=10){
            cout<<"A["<<i<<"]"<<" = "<<fixed<<setprecision(1)<<a[i]<<endl;
        }
    }

return 0;
}