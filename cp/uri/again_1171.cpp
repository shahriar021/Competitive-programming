#include<iostream>
using namespace std;
int main()
{

    int t,n,counter[2001];
    cin>>t;
    for(int i=0;i<=2000;i++){
        counter[i]=0;
    }
    for(int i=0;i<t;i++){
        cin>>n;
        counter[n]++;
    }
    for (int i = 1; i <= 2000; i++)
    {
       if(counter[i]>0)
           cout << i << " aparece " << counter[i] << " vez(es)"<<endl;
    }
    return 0;
}