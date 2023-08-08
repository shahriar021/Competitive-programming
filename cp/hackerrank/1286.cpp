#include <bits/stdc++.h>
using namespace std;

void k(int W, int w[], int v[], int n)
{

    int total[n + 1][W + 1];
    /*for (int i = 0; i <= n; i++)
    {
        for (int j = 0;j <= W; j++)
        {
            total[i][j]=-1;
        }
    }*/

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                total[i][j] = 0;
            else if (j >= w[i - 1])
                total[i][j] = max(v[i - 1] + total[i - 1][j - w[i - 1]], total[i - 1][j]);
            else if (j <= w[i - 1])
                total[i][j] = total[i - 1][j];
        }
    }
    int ans = total[n][W];
    cout << ans << " min" << endl;
}
int main()
{

    int n, W;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        cin >> W;
        int v[20], w[30];
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            cin >> w[i];
        }
        k(W, w, v, n);
    }

    return 0;
}