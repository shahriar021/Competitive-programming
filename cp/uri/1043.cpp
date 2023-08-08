#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
    }
    else{
        cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)/2)*c<<endl;
    }

    return 0;
}