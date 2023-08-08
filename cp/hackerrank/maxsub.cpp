#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll subarray(vector<ll> a)
{

    ll n = a.size();
    ll s = 0, ans = INT_MIN, k = 0;
    for (ll x : a)
    {
        s += x;
        ans = max(ans, s);
        s = max(s, k);
    }
    return ans; //O(n)
}
ll subsequence(vector<ll> a)
{
    ll n = a.size();
    ll max_so_far = a[0];
    ll i;
    for (i = 1; i < n; i++)
    {
        if (a[i] + max_so_far > max_so_far)
        {
            max_so_far = a[i] + max_so_far;
        }

        max_so_far = max(max_so_far, a[i]);
    }
    return max_so_far; //O(n)
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll i;
        vector<ll> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << subarray(a) << " " << subsequence(a) << endl;
    }
}