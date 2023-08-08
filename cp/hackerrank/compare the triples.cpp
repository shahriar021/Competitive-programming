#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],c,d;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if(a[i]>b[i]){
            c++;
            cout<<c<<endl;
        }
        else if(b[i]>a[i]){
            d++;
            cout << d << endl;
        }
    }
    

    return 0;
}