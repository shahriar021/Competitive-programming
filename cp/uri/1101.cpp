#include<iostream>
using namespace std;
int main()
{
   int a,b,max,min,sum;
   while(1){
   cin>>a>>b;
   if(a<=0 || b<=0){
       break;
   } 
   if(a>b){
       max=a;
       min=b;
   }
   else{
       max=b;
       min=a;
   }
   sum=0;
   for(int i=(min);i<=max;i++){
       cout<<i<<" ";
       sum+=i;
   }
   cout<<"Sum="<<sum<<endl;
   }

return 0;
}