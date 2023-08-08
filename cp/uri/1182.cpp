#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    double m[2][2];
    double sum=0;
    int n;
    char c;
    cin>>n;
    cin>>c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>m[i][j];
            if(j==n){
                sum+=m[i][j];
            }
        }
    }
    if(c=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<sum/2<<endl;
    }
    return 0;
}