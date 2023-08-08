#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, len = 0, mx = 0;
    cin >> n;
    long long arr[n + 1], sum = 0, lim;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> lim;
    for (int i = 0; i < n; i++)
    {
        sum = 0, len = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum <= lim)
                len++;
        }
        mx = max(mx, len);
    }
    cout << mx << "\n";
    return 0;
}