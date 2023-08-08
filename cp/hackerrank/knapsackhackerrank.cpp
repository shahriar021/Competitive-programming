#include<bits/stdc++.h>
using namespace std;

long long unboundedKnapsack(int k, vector<long long> arr)
{
    int n = arr.size();
    int dp[n + 1][k + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            dp[i][j]=-1;
        }
    }
            for (int j = 0; j < k + 1; j++)
                dp[0][j] = 0;
            for (int i = 0; i < n + 1; i++)
                dp[i][0] = 1;

            for (int i = 1; i < n + 1; i++)
            {
                for (int j = 1; j < k + 1; j++)
                {   
                    
                    if (arr[i - 1] < j)
                    {
                        dp[i][j] = dp[i][j - arr[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            long long maxans = 0;
            for (int i = 0; i < k + 1; i++)
            {
                if (dp[n][i])
                {
                    maxans = i;
                }
            }
            return maxans;
        }

        int main()
        {
            int t;
            cin >> t;
            for (int i = 0; i < t; i++)
            {
                int n, k;
                cin >> n >> k;
                vector<long long> ar(n);

                for (int j = 0; j < n; j++)
                {
                    int input;
                    cin >> input;
                    ar[j] = input;
                }

                cout << unboundedKnapsack(k, ar) << endl;
            }
            return 0;
        }