/*#include <iostream>
using namespace std;
int main()
{
    int n, i, m = 0, flag = 0,t;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin >> n;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout <<n<< "Number is not Prime." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout <<n<< "Number is Prime." << endl;
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int num,t;
    bool flag = true;
    cin>>t;
    for(int j=1;j<=t;j++){
    cin >> num;
    if(num==0 || num==1){
        cout << num << " is not a prime number\n";
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << num << " is a prime number\n";
    else
        cout << num << " is not a prime number\n";
    }
    return 0;
}