#include<iostream>
using namespace std;
int main()
{
    int a[20];
   
    for(int i=19;i>=0;i--){
        cin>>a[i];
    }
    for(int i=0;i<20;i++){
        cout<<"N["<<i<<"]"<<" = "<<a[i]<<endl;
    }

return 0;
}