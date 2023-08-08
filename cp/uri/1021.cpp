#include <iostream>
using namespace std;
int main()
{
    double a;
    int a_1,b,b_1;
    cin >> a;
    a_1=a;
    a=100*a;
    b_1=a;
    
    cout << "NOTAS:" << endl;
    cout << a_1 / 100 << " nota(s) de R$ 100.00" << endl;
    b = a_1 % 100;
    cout << b / 50 << " nota(s) de R$ 50.00" << endl;
    b = b % 50;
    cout << b / 20 << " nota(s) de R$ 20.00" << endl;
    b = b % 20;
    cout << b / 10 << " nota(s) de R$ 10.00" << endl;
    b = b % 10;
    cout << b / 5 << " nota(s) de R$ 5.00" << endl;
    b = b % 5;
    cout << b / 2 << " nota(s) de R$ 2.00" << endl;
    b = b % 2;

    cout << "MOEDAS:" << endl;


    cout << b / 1 << " moeda(s) de R$ 1.00" << endl;
    b_1= b_1 % 100;
    cout << b_1 / 50 << " moeda(s) de R$ 0.50" << endl;
    b_1 = b_1 % 50;
    cout << b_1 / 25 << " moeda(s) de R$ 0.25" << endl;
    b_1 = b_1 % 25;
    cout << b_1 / 10 << " moeda(s) de R$ 0.10" << endl;
    b_1 = b_1 % 10;
    cout << b_1 / 5 << " moeda(s) de R$ 0.05" << endl;
    b_1 = b_1 % 5;
    cout << b_1 / 1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}