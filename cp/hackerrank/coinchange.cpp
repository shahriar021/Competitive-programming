#include <bits/stdc++.h>
using namespace std;

long ways(  long coin[], int n, int k)
{

     long  L[n + 1][k + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (i == 0)
            {
                L[0][j] = 0;
            }
            else if (j == 0)
            {
                L[i][0] = 1;
            }
            else if (coin[i - 1] > j)
            {
                L[i][j] = L[i - 1][j];
            }
            else
            {
                L[i][j] = L[i - 1][j] + L[i][j - coin[i - 1]];
            }
        }
    }
    return L[n][k];
}

int main()
{
      int n, k;
       long coin[100000];
    cin >> k >> n;
    for ( int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    long w = ways(coin, n, k);

    cout <<w<<endl;
    return 0;
}