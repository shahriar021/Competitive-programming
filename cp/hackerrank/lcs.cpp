#include <bits/stdc++.h>
using namespace std;
void lcs(int a[], int n, int b[], int m)
{
    int t[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        t[i][0] = 0;
    }
    for (int i = 0; i < m + 1; i++)
    {
        t[0][i] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    int index = t[n][m];
    //cout<<index<<endl;
    int c[index];
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            c[index - 1] = a[i - 1];
            index--;
            i--;
            j--;
        }
        else if (t[i - 1][j] > t[i][j - 1])
            i--;
        else
        {
            j--;
        }
    }
    for (int i = 0; i < t[n][m]; i++)
        cout << c[i] << " ";
    cout << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    lcs(a, n, b, m);
    return 0;
}