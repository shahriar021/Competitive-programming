#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    long long arr[n + 1];
    map<long long, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    long long int total_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            if (cnt[x - arr[i]])
                total_cnt++;
        }
    }
    cout << total_cnt << "\n";
    return 0;
}