
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    char arr[6];
    cin>>t;
    while(t--){
        cin>>arr;
        if(strlen(arr)==5){
            cout<<"3"<<endl;
        }
        
      
        else if ((strlen(arr)==3) && ((arr[0] == 't' && arr[1] == 'w') || (arr[0] == 't' && arr[2] == 'o') || (arr[1] == 'w' && arr[2] == 'o')))
            {
                cout << "2" << endl;
            }
        else{
            cout<<"1"<<endl;
        }
        
    }

return 0;
}