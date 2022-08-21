#include <bits/stdc++.h>
using namespace std;
int k=0;

/*
bool place(int k, int l, vector<int> &res)
{
    int j = 0;
    while (j < k)
    {
        if (res[j] == l || abs(res[j] - l) == abs(j - k))
            return false;
        j++;
    }
    return true;
}
void Queen(vector<int> &v, int n, int src, vector<int> &res)
{
    int i = 0;
    while (i < n)
    {
        if (place(src, i, res))
        {
            res[src] = i;
            if (src == n - 1)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << res[j]+1 << " ";
                }
                cout << "\n";
            }
            Queen(v, n, src + 1, res);
        }
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    vector<int> ans(n);
    int source;
    cin >> source;
    Queen(vc, n, source - 1, ans);
vector<vector<int>>r;
r.capacity();
    return 0;
}
*/
int main()
{
    vector<vector<int>>r;
    r[0][0]=1;
    cout<<r.capacity()<<"\n";
    cout<<r.size()<<"\n";
return 0;
}