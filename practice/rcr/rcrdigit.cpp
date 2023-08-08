#include<iostream>
using namespace std;
int dig(int n){
    static int c=0;
        if(n!=0)
        {
        c++;
        dig(n/10);
        }

    return c;

}
int main()
{
    int n;
    cin>>n;
    cout<<dig(n)<<endl;
    return 0 ;   

}
