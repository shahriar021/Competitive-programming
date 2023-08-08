#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,l;
    char n[100];
   
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        int sum = 0;
        l=strlen(n);
        for (int i = 0; i < l; i++)
        {   
            if(n[i]=='\0') break;
            if (n[i] == '1')
                sum += 2;
            else if (n[i] == '2')
                sum += 5;
            else if (n[i] == '3')
                sum += 5;
            else if (n[i] == '4')
                sum += 4;
            else if (n[i] == '5')
                sum += 5;
            else if (n[i] == '6')
                sum += 6;
            else if (n[i] == '7')
                sum += 3;
            else if (n[i] == '8')
                sum += 7;
            else if (n[i] == '9')
                sum += 6;
            else if (n[i] == '0')
                sum += 6;
    }
    cout<<sum<<" leds"<<endl;
 }
return 0;
}