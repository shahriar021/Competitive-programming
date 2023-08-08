#include<iostream>
using namespace std;
int sum(int n){
    //int i=1;
    if(n<=0){
        return 0;        
    }
    return sum(n-1)+sum(n-2);
}
int main(){
    int n;
    cin>>n;
    sum(n);n
    cout<<sum(n);
    return 0;


}
