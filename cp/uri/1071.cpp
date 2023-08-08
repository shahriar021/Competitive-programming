#include<iostream>
using namespace std;
int main()
{
    int a,b,max,min,c=0;
    cin>>a>>b;
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    for(int i=(min+1);i<max;i++){
        if(i%2==1 || i%2==-1){
            c+=i;
        }
    }
    cout<<c<<endl;
    return 0;


}