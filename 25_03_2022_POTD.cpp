#include <bits/stdc++.h>
using namespace std;
int *smallestGreater(int A[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        auto j = upper_bound(s.begin(), s.end(), A[i]);
        // auto j=s.upper_bound(A[i]);
        if (j == s.end())
        {
            A[i] = -10000000;
        }
        else
        {
            A[i] = *j;
        }
    }
    return A;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    int *k = smallestGreater(a, n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << k[i]<<" ";
    }
    cout<<endl;
    return 0;
}