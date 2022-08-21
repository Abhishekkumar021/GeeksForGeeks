#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

bool isPosible(vector<int> &arr, int s, int x)
{
    int n = arr.size();
    vector<int> ans(n + 1, 0);

    ans[0] = s;
    int S = 0, l = 1;

    for (int i = 0; i < n; i++)
    {
        ans[l] = (S + arr[i] + s) % mod;
        S += ans[l++];
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";
    int j = ans.size();

    while (j--)
    {
        if (x > ans[j] && x > 0)
            x -= ans[j];
        if(x<=0)
            break;
    }

    if (x == 0)
        return true;
    else
        return false;
}

int main()
{
    int n, s, x;
    cin >> s >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isPosible(arr, s, x) == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return (0);
}
