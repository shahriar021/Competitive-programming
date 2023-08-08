#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,e;
    cin >> n;
    e=n * 3.14159 * n;
    cout << "A=" << fixed << setprecision(4) << e << endl;
    return 0;
}