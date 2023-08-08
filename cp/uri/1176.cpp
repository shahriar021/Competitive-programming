/*#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
    
   
    cout<<"Fib("<<n<<")"<<" = "<<fib(n)<<endl;
   
    }
    return 0;


}*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, t;
    long long fst, snd, next;

    cin >> t;

    while (t--)
    {
        cin >> n;

        fst = 0;
        snd = 1;

        if (n <= 1)
            next = n;

        else
        {
            for (int i = 2; i <= n; i++)
            {
                next = fst + snd;
                fst = snd;
                snd = next;
            }
        }

        printf("Fib(%d) = %lld\n", n, next);
    }
}