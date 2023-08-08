#include <iostream>

using namespace std;

int main()
{
    int num, arr[1000], n,t;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        //arr[i] = n;
    }
  cin>>t;
    for (int i = 0; i < num; i++)
    {
      if(arr[i]==t){
          cout<<i<<endl;
      }
    }                                          // Reading input from STDIN
    //cout << "Input number is " << num << endl; // Writing output to STDOUT
}