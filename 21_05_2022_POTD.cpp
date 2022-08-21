#include <bits/stdc++.h>
using namespace std;
int binary(vector<int> v, int l, int h, vector<int> arr)
{
    int mid, a = -1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (v[mid] < arr[l-1])
        {
            a = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return a;
}
vector<int> farElement(vector<int> v)
{
    int n = v.size();
    vector<int> ans(n);
    vector<int> m(n);
    for (int i=0; i <n-1; i++)
    {
        m[i] = min(v[i], v[i+1]);
    }
    m[n-1]=v[n-1];
    for (int i = 0; i < n; i++)
    {
        ans[i] = binary(m, i+1, n-1, v);
    }
    return ans;
}

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        // vc[i] = 1 + rand() % 95;
        cin>>vc[i];
    }

    for (auto k : vc)
    {
        cout << k << " ";
    }
    cout << "\n";

    vector<int> a = farElement(vc);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}