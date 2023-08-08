#include<iostream>
using namespace std;
int main()
{

    int n,m,min,max;
    cin>>n>>m;
    if(n>=0 && m>=0){
        if(n>m){
            max=n;
            min=m;
        }
        else{
            max=m;
            min=n;
        }
        for(int i=(min+1);i<max;i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }

    return 0;
}