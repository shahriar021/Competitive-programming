#include<iostream>
using namespace std;
int main()
{
    int n,t,sum;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t;
        sum=0;
    
    ///sum=0;
    for(int i=1;i<t;i++){
        if(t%i==0){
           sum+=i;
           if(sum>t) break;
           
        }
    }
    if (sum == t)
    {
        cout << t << " eh perfeito" << endl;
    }
    else
    {
        cout << t << " nao eh perfeito" << endl;
    }
    }
return 0;
}