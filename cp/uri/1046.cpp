#include<iostream>
using namespace std;
int main()
{
    int a,b,d,e;
    cin>>a>>b;
    if(a==b){
        cout << "O JOGO DUROU 24 HORA(S)"<<endl;
    }
    if(a<b){
        d=a-b;
        cout<<"O JOGO DUROU "<<abs(d)<<" HORA(S)"<<endl;
    }
    if(a>b){
        e=24-(a-b);
        cout << "O JOGO DUROU " << e << " HORA(S)" << endl;
    }

    return 0;
}