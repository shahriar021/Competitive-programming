#include<bits/stdc++.h>
using namespace std;


int reverse(int x)
{
    int r[x];
    int t;
    while (x != 0)
    {
        int i = 0;
        t = x % 10;
        r[i] = t;
        x = x / 10;
        i++;
    }
    return r[x];
}

int main(){

    int x;
    cin>>x;
    cout<<reverse(x)<<endl;
}