#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int calo[40];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>calo[i];
    }
    sort(calo, calo + n, greater<int>());
    long int c=0;
    for(int i=0;i<n;i++){
        c+=pow(2,i)*calo[i];
    }

    cout<<c;
return 0;

}