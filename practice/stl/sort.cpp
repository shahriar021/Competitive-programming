/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int number,s;
    vector<int> numberHolder;
    while (cin >> number)
    {
        numberHolder.push_back(number);
    }
    sort(numberHolder.begin(), numberHolder.end());
    s=numberHolder.size();
    for(int i=0;i<5;i++){
    cout<<numberHolder[i]<<endl;
    }
    return 0;
    }*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int number,t;
    //cin >> vSize;
    vector<long long int> numberHolder;
    for(int i=1;i<=t;i++){
    while (cin >> number)
    {
        numberHolder.push_back(number);
    }
    }
    sort(numberHolder.begin(), numberHolder.end());

    int vSize=numberHolder.size();

    if(vSize==0){
        cout<<"empty"<<endl;
        return 1;
    }

    int numcount = 1;
    number = numberHolder[0];

    for (int i = 1; i < t; i++)
    {
        if (number != numberHolder[i])
        {
            cout << number << " aparece " << numcount << " vez(es) " << endl;
            numcount = 0;
            number = numberHolder[i];
        }
        numcount++;
    }

    return 0;
}
