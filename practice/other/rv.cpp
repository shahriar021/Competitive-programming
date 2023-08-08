#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = m - 1;
        while (r >= l)
        {
            int mid = l + (r - l) / 2;
            if (a[i][mid] == x)
            {
                cout << i << " " << mid;
                c++;
                break;
            }

            if (a[i][mid] > x)

            {

                r = mid - 1;
            }
            if (a[i][mid] < x)

            {

                l = mid + 1;
            }
        }
    }
    if (c == 0)
        cout << "The integer does not exist in the array." << endl;
}