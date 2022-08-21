#include<bits/stdc++.h>
using namespace std;
// Back-end complete function Template for C++
class Solution
{
public:
    // Dfs function to find count of nodes at
    // even distance
    void dfs(vector<int> graph[], int node, int dist[],
             bool vis[], int c)
    {
        if (vis[node])
        {
            return;
        }
        // Set flag as true for current
        // node in visited array
        vis[node] = true;

        // Insert the distance in
        // dist array for current
        // visited node u
        dist[node] = c;

        for (int i = 0; i < graph[node].size(); i++)
        {
            // If its neighbours are not vis,
            // run dfs for them
            if (!vis[graph[node][i]])
            {
                dfs(graph, graph[node][i], dist, vis, c + 1);
            }
        }
    }

    int countOfNodes(vector<int> graph[], int n)
    {
        // bool array to
        // mark visited nodes
        bool vis[n + 1] = {false};

        // Integer array to
        // compute distance
        int dist[n + 1] = {0};

        dfs(graph, 1, dist, vis, 0);

        int even = 0, odd = 0;

        // Traverse the distance array
        // and count the even and odd levels
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        int ans = ((even * (even - 1)) + (odd * (odd - 1))) / 2;

        return ans;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
