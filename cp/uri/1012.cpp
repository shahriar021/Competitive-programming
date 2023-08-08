#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    double r_t,cir,trapi,sqr,rc;
    cin>>a>>b>>c;
    r_t=(a*c)/2;
    cir=c*c*3.14159;
    trapi=((a+b)/2)*c;
    sqr=b*b;
    rc=a*b;
    cout << "TRIANGULO: " <<fixed  << setprecision(3) << r_t <<endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << cir << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapi << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << sqr << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rc << endl;
    return 0;
}