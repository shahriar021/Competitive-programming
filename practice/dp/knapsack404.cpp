#include <iostream>
using namespace std;


long long  knapsack(long v[], long w[], long n, long W)
{
    
    long long T[n + 1][W + 1];

    for (long j = 0; j <= W; j++)
    {
        T[0][j] = 0;
    }

   
    for (long i = 1; i <= n; i++)
    {
        
        for (long j = 0; j <= W; j++)
        {
            
            if (w[i - 1] >j)
            {
                T[i][j] = T[i - 1][j];
            }
            else
            {
               
                T[i][j] = max(T[i - 1][j],
                              T[i - 1][j - w[i - 1]] + v[i - 1]);
            }
        }
    }

   
    return T[n][W];
}


int main()
{
    
    long v[100000];
    long w[100000];  
    long W ;
    long n; 
    cin>>n>>W;
    for(long i=1;i<=n;i++){
        cin>>w[i];
        cin>>v[i];
    }
    cout << knapsack(v, w, n, W);

    return 0;
}