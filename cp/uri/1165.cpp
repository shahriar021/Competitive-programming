#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int t,n,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        c=0;
        for(int j=1;j<sqrt(n);j++){
            if(n%j==0) c++;
            if(c>1) break;
            
        }
        if(c==1){
            cout<<n<<" eh primo\n";
        }
        else{
            cout<<n<<" nao eh primo\n";
        }

    }
return 0;
}