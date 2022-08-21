#include <bits/stdc++.h>
using namespace std;

vector<int> bellManFord(vector<vector<int>> &g, int src, int n)
{
    vector<int> dist(n, 1e9);
    dist[src] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < g.size(); j++)
        {
            int u = g[j][0];
            int v = g[j][1];
            int wt = g[j][2];

            if (dist[u] != 1e9 && dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
            }
        }
    }
    return dist;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> g(e, vector<int>(3));
    for (int i = 0; i < e; i++)
    {
        cin >> g[i][0] >> g[i][1] >> g[i][2];
    }
    int src;
    cout << "\nEnter your Source :- ";
    cin >> src;
    vector<int> ans = bellManFord(g, src, v);

    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << "\n";

    return 0;
}