#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<(a-b)<<endl;
    }
    else if(a==b){
        cout<<(a-b)<<endl;
    }
    else if(b>a){
        cout<<(b-a)<<endl;
    }

    return 0;
}