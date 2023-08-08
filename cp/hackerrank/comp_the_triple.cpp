#include <iostream>
using namespace std;
int main()
{
    int a[3], b[3],alice=0,bob=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        cin >> b[j];
    }
    for (int i = 0; i < 3; i++)
    {
       if(a[i]>b[i]){
           alice +=1;
       }
       else if (a[i] < b[i])
       {
           bob += 1;
       }
       /*else if(a[i]==b[i]){
           alice=0;
           bob=0;
       }*/
    }
    cout<<alice<< "\t" <<bob<<endl;
    

    return 0;
}