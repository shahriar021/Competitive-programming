#include<iostream>
using namespace std;
int main()
{
    int H1,M1,H2,M2,tm_1,tm_2;
    while(cin>>H1>>M1>>H2>>M2){
        if(H1==0 && M1==0 && H2==0 && M2==0){
            break;
        }
    if(H1>H2){
        tm_1=H1-H2;
        tm_1=tm_1*60;
    }
    else{
        tm_1=H2-H1;
        tm_1=tm_1*60;
    }
    if (M1 > M2)
    {
        tm_2 = M1 - M2;
       // tm_2=tm_2*60;
    }
    else
    {
        tm_2 = M2 - M1;
    }
    cout<<tm_1+tm_2<<endl;
    }
    return 0;
}