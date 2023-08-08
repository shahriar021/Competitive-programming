#include<iostream>
using namespace std;

int num(int n){
    
    if(n<=50){
        cout<<n<<" ";
        num(n+1);

    }
   
    return 0;


}
int main()
{
    int n=1;
    num(n);
    return 0;

}