#include<iostream>
using namespace std;
int  gcd(int n,int m){
    int s;
    if (n!=0 && m!=0){
        s =n%m;
        return s;
    }
    return 0;

}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;

}
