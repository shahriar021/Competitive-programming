#include<iostream>
using namespace std;
int main(){

    int n,m,r,s;
    cin>>n>>m;

    r=n*(m/100);
    s=n-r;
    cout<<s<<endl;
    return 0;
}