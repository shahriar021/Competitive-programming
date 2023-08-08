#include<iostream>
using namespace std;
int main()
{
    int arr[100],t,p;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    cin>>p;
    for (int i = 0; i < t; i++)
    {
       arr[p]--;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<arr[i]<<endl;;
    }

return 0;
}