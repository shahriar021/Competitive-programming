#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



int main()
{
    
    int m, n;
    while (scanf("%d %d", &m, &n) && (m + n))
    {
        ll data[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%lld", &data[i][j]);

        ll dp[n], dp2[m];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    dp[j] = data[i][j];
                else if (j == 1)
                    dp[j] = max(dp[j - 1], data[i][j]);
                else
                    dp[j] = max(data[i][j] + dp[j - 2], dp[j - 1]);
            }
            if (i == 0)
                dp2[i] = dp[n - 1];
            else if (i == 1)
                dp2[i] = max(dp2[i - 1], dp[n - 1]);
            else
                dp2[i] = max(dp[n - 1] + dp2[i - 2], dp2[i - 1]);
        }
        printf("%lld\n", dp2[m - 1]);
    }
    return 0;
}