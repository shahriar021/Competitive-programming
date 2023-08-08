#include<bits/stdc++.h>
using namespace std;
int maxrod(int n){
    int lok[n+1];

    for(int i=0;i<=n;i++){

        lok[i]=i;
    }
    
    for(int i=2;i<=n;i++){
      for(int j=1;j<=i;j++){
          lok[i]=max(lok[i],j*lok[i-j]);
      }
    }

    return lok[n];

}

int main(){

    int  n;
    cin>>n;
    cout<<maxrod(n);
    return 0;
}