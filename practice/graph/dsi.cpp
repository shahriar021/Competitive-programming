#include <iostream>
#include <deque>
#include <vector>

using namespace std;

struct vertex
{
    vector<int> edges;
    bool visited;
};

int dist = 0;

int BFS(vertex Graph[], int v, int target)
{
    deque<int> Q;
    Q.push_front(v);
    Graph[v].visited = true;
    while (!Q.empty())
    {
        int t = Q.back();
        Q.pop_back();
        if (t == target)
        {
            return t;
        }
        for (unsigned int i = 0; i < Graph[t].edges.size(); i++)
        {
            int u = Graph[t].edges[i];
            if (!Graph[u].visited)
            {
                Graph[u].visited = true;
                Q.push_front(u);
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vertex Graph[n];
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        Graph[a].edges.push_back(b);
        Graph[b].edges.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        Graph[i].visited = false;
    }

    int s, t;
    cin >> s >> t;

    cout << BFS(Graph, s, t);
}