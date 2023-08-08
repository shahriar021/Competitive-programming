#include <bits/stdc++.h>
using namespace std;


int min_number_of_stops(int ara[],int n,int k)
{
    int c=1,total=0;
   
    for(int i=1;i<=n;i++)
    {
        if (k >=(total += ara[i]))
        {
            total += ara[i];
        }
        else{
            c++;
            total=ara[i];
        }
       
       
    }
    return c;
}

int main()
{
    int ara[100000];
    int n, k;
    cin >> n>>k;
   
    for (int i = 1; i <= n; i++)
    {
        cin>>ara[i];
    }
    cout<< min_number_of_stops(ara,n,k);
    
}