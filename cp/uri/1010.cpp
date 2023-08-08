#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,e,d,f,sum_1,sum_2,sum;
    cin>>a>>b>>c;
    sum_1=b*c;
    cin >> d >> e >> f;
    sum_2 = e * f;
    sum=sum_1+sum_2;
    cout << "VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}