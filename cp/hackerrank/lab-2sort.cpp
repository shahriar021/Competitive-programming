#include<iostream>
using  namespace std;
int main()
{
    int a[100000];
    int i, j, n, l, temp, m; 
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        m = a[i];
        l = i;
        for (j = i + 1; j < n; j++)
        {
            if (m > a[j])
            {
                m = a[j];
                l = j;
            }
        }

        temp = a[i];
        a[i] = a[l];
        a[l] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}