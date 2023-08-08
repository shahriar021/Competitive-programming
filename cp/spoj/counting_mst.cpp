#include <bits/stdc++.h>
using namespace std;
#define max 10000000
struct eg
{
    int u, v, w;
    bool operator<(const eg &p) const
    {
        return w < p.w;
    }
};
int par[max];
vector<eg> mst;
int find(int r)
{
    return par[r] == r ? r : find(par[r]);
}
void kruskal(int n)
{
    sort(mst.begin(), mst.end());
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
    }
    int c = 0, s = 0;
    for (int i = 0; i < (int)mst.size(); i++)
    {
        int u = find(mst[i].u);
        int v = find(mst[i].v);
        if (u != v)
        {
            par[u] = v;
            c++;
            s += mst[i].w;
            if (c == n - 1)
            {
                break;
            }
        }
    }
    int r=pow(n,(s-2));
    cout<<r<<endl;
}

int main()
{
    int n, m, u, v, w;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        eg g;
        g.u = u;
        g.v = v;
        g.w = w;
        mst.push_back(g);
    }
     kruskal(n);
    return 0;
}