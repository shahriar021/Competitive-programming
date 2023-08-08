#include<bits/stdc++.h>
using namespace std;
int dig(int n){
    if(n==0){
        return 0;
    }

    return n%10+dig(n/10);


}

int main(){
    int n;
    cin>>n;
    cout<<dig(n);
    return 0;


}