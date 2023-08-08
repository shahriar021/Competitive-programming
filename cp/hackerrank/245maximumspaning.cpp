#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

struct edge
{
    int u, v, w;
    bool operator<(const edge &p) const
    {
        return w >= p.w;
    }
};
int pr[MAXN];
int n;
vector<edge> e(n);
int find(int r)
{
    int cur = r;
    while (pr[cur] != cur)
    {
        cur = pr[cur];
    }
    return cur;
}
int mst(int n)
{
    sort(e.begin(), e.end());
    for (int i = 1; i <= n; i++)
        pr[i] = i;

    int count = 0, s = 0;
    for (int i = 0; i < (int)e.size(); i++)
    {
        int u = find(e[i].u);
        int v = find(e[i].v);
        if (u != v)
        {
            pr[u] = v;
            count++;
            s += e[i].w;
            if (count == n - 1)
                break;
        }
    }
    return s;
}

int main()
{

    int m;
    scanf("%d %d",&n,&m);
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v,&w);
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }
    printf("%d\n",mst(n));

    return 0;
}