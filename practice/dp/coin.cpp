#include <iostream>
#include <climits>
using namespace std;


int findMinCoins(int S[], int n, int N)
{
   
    int T[N + 1];
   
    T[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        T[i] = INT_MAX;
        int result = INT_MAX; 
        for (int c = 0; c < n; c++)
        {     
            if (i - S[c] >= 0)

            {
              
                result = T[i - S[c]];
               
              
            } 
            if (result != INT_MAX)
            {
                T[i] = min(T[i], result + 1);
               
            }
        }
    }

  
    return T[N];
}

int main()
{
  
    int S[1000];
    int n ;

   
    int N ;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>S[i];
    }
    cin>>N;
    int coins = findMinCoins(S, n, N);
   
    if (coins != INT_MAX)
    {
        cout << "The minimum number of coins required to get the desired change is "
             << coins;
    }

    return 0;
}