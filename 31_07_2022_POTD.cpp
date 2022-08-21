#include <bits/stdc++.h>
using namespace std;
bool findRange(vector<int> &arr, int a, int b)
{
    if (a > b)
        return false;
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (count(arr.begin(), arr.end(), i) == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> adj(n);
    for (int i = 0; i < n; i++)
    {
        cin >> adj[i];
    }

    int a, b;
    cin >> a >> b;

    if (findRange(adj, a, b))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}