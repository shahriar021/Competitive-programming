#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include<algorithm>

using namespace std;

bool compare(const pair<int, int> &A, const pair<int, int> &B);

int main()
{
    vector<int> v;
    int tok;
    while (cin >> tok)
    {
        v.push_back(tok);
    }

    sort(v.begin(), v.end(), &compare);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " v[i].second;
    }
    return 0;
}

bool compare(const pair<int, int> &A, const pair<int, int> &B)
{
    if (A.second <= B.second)
    {
        if (A.first >= B.first)
            return 1;
        else
            return 0;
    }
    return 0;
}