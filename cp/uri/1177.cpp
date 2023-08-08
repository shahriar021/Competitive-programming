#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t, a;

    vector<int>arr(1000);

    cin >> t;
    a = 0;
    for (int i = 0; i < arr; i++)
    {
        cout << "N[" << i << "] = " << a <<endl;
        a++;
        if (a == t)
            a = 0;
    }
    return 0;
}