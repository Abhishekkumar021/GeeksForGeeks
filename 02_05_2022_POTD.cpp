#include <bits/stdc++.h>
using namespace std;
// class Solution{
// public:
//     void partyHouse(int N, vector<vector<int>> &adj){
//         // vector<vector<int>>ans;
//       for(int i=0;i<adj.size();i++)
//       {
//           for(int j=0;j<adj.size();j++)
//           {
//               cout<<adj[i][j]<<" ";
//           }
//           cout<<endl;
//       }
//     }
// };

void partyHouse(int N, vector<vector<int>> &adj)
{
    // vector<vector<int>>ans;
    for (int i = 0; i < adj.size(); i++)
    {
        for (int j = 0; j < adj.size(); j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, x, y;
        cin >> N;
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < N - 1; i++)
        {
            cin >> x >> y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }

        // Solution ob;
        // cout<<ob.partyHouse(N, adj)<<"\n";
        partyHouse(N, adj);
    }
    return 0;
}