#include <bits/stdc++.h>
using namespace std;

int ar[1000000];
int n;

void merge_sort(int ar[], int sz)
{
    if (sz == 1)
    {
        return;
    }
    int leftSize = sz / 2;
    int rightSize = sz - leftSize;
    int left[leftSize];
    int right[rightSize];
    for (int i = 0; i < leftSize; i++)
    {
        left[i] = ar[i];
    }
    for (int i = leftSize; i < sz; i++)
    {
        right[i - leftSize] = ar[i];
    }
    merge_sort(left, leftSize);
    merge_sort(right, rightSize);
    int leftMarker = 0;
    int rightMarker = 0;
    int ind = 0;
    while (leftMarker < leftSize && rightMarker < rightSize)
    {
        if (left[leftMarker] <= right[rightMarker])
        {
            ar[ind] = left[leftMarker];
            ind++;
            leftMarker++;
        }
        else
        {
            ar[ind] = right[rightMarker];
            ind++;
            rightMarker++;
        }
    }
    while (leftMarker < leftSize)
    {
        ar[ind] = left[leftMarker];
        ind++;
        leftMarker++;
    }
    while (rightMarker < rightSize)
    {
        ar[ind] = right[rightMarker];
        ind++;
        rightMarker++;
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    merge_sort(ar, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}