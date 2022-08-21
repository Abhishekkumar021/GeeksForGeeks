#include <bits/stdc++.h>
using namespace std;
vector<int> makeTriangle(vector<int> p)
{
    vector<int> l;
    for (int i = 0; i < p.size()-2; i++)
    {
        if ((p[i] + p[i + 1] > p[i + 2]) && (p[i] + p[i + 2] > p[i + 1]) && (p[i+1] + p[i + 2] > p[i]))
        {
            l.push_back(1);
        }
        else
        {
            l.push_back(0);
        }
    }
    return l;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        s = makeTriangle(v);
        for (auto i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}