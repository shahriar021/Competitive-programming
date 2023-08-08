#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m[12][12];
    double sum=0.0;
    int n;
    char c;
    cin>>n;
    cin>>c;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
            if(i==n){
                sum+=m[i][j];
            }
        }
    }
    if(c=='S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<sum/12<<endl;
    }

return 0;
}