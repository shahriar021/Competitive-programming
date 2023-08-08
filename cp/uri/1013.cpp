#include<iostream>
using namespace std;
int main()
{
    int a,b,c,grt,grt_1;
    cin>>a>>b>>c;
    grt=(a+b+abs(a-b))/2;
    grt_1=(grt+c+abs(grt-c))/2;
    cout<<grt_1<<" eh o maior"<<endl;
    return 0;


}