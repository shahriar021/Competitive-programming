#include <bits/stdc++.h>
using namespace std;

bool comp(const tuple<int, int, int> &a, const tuple<int, int, int> &b)
{
    return get<2>(a) > get<2>(b);
}

vector<tuple<int, int, int>> edge;
int pre[200009];

int find(int e)
{
    return (pre[e] == e) ? e : find(pre[e]);
}

int kruskal(int n, int k)
{
    sort(edge.begin(), edge.end(), comp);
    for (int i = 0; i <= n; i++)
    {
        pre[i] = i;
    }
    int cnt = 0, sum = 0, even_cnt = 0;
    priority_queue<int> highest_odd;
    for (int i = 0; i < edge.size(); i++)
    {
        int w = get<2>(edge[i]);
        if (w % 2)
            highest_odd.push(w);
    }
    for (int i = 0; i < edge.size(); i++)
    {

        if (get<2>(edge[i]) == -1)
            continue;

        int u = find(get<0>(edge[i]));
        int v = find(get<1>(edge[i]));
        if (u != v)
        {
            int w = get<2>(edge[i]);
            if (w % 2 == 0)
                even_cnt++;
            if (cnt + 1 == n - 1 && even_cnt < k)
            {
                int top_odd = highest_odd.top();
                highest_odd.pop();
                for (int i = 0; i < edge.size(); i++)
                {
                    int w = get<2>(edge[i]);
                    if (w == top_odd)
                    {
                        get<2>(edge[i]) = -1;
                    }
                }
                continue;
            }

            pre[u] = v, cnt++, sum += w;
            get<2>(edge[i]) = -1;
            if (cnt == n - 1)
                break;
        }
    }
    return sum;
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        edge.push_back(make_tuple(u, v, w));
    }
    printf("%d\n", kruskal(n, k));
    return 0;
}