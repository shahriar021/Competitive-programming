#include<iostream>
#include<string>
using namespace std;
int LCSLecngth(string x,string y){

    int m= x.length(),n= y.length();
    int lookup[m+1][n+1];
    for(int i=0;i<=m;i++){
        lookup[i][0]=0;
    }
    for(int j=0;j<=n;j++){
        lookup[0][j]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                lookup[i][j]=lookup[i-1][j-1]+1;
            }
            else{
                lookup[i][j]=max(lookup[i-1][j],lookup[i][j-1]);
            }
        }
    }
    return lookup[m][n];
}

int main(){

    string x,y;
    cin>>x>>y;
    cout<<LCSLecngth(x,y)<<endl;
    return 0;

}