#include <bits/stdc++.h>
using namespace std;
bool is_Possible(vector<vector<int>> &vc, int n)
{
    int blank = 3;
    int wall = 0;
    int dest = 2;
    int source = 1;
    int temp;
    pair<int, int> s;
    pair<int, int> d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vc[i][j] == dest)
            {
                d.first = i;
                d.second = j;
            }
            if (vc[i][j] == source)
            {
                s.first = i;
                s.second = j;
            }
        }
    }

    int k=s.first,l=s.second;
    while (vc[k][l]!=0 && vc[k][l]==source)
    {
       if(k>d.first)
    }
    


}
int main()
{
    int n;
    cout << "\nEnter your Array Size ";
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}