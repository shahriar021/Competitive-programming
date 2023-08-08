#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{   
    int t,arr[10000],c,p;
   while(scanf("%d",&t)==1){
       if(t==0){
           break;
       }
        c = 0, p = 0;
       for (int i = 0; i < t; i++)
       {
           cin >> arr[i];
    }
    for (int j = 0; j < t; j++)
    {
        if(arr[j]==0){
            c++;
        }
        else{
            p++;
        }
    }

    cout <<"Mary won "<<c<<" times and John won "<<p<<" times"<< endl;
    }
    return 0;
}