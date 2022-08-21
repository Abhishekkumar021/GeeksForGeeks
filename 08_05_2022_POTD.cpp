#include <bits/stdc++.h>
using namespace std;
/*
1
10 5
21 23 23 24 25 26 28 30 38 40
41 43 44 48 50
6
expected 68
*/

int nthItem(int a[], int b[], int l1, int l2, int N)
{
    set<int> ans;

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            ans.insert(a[i] + b[j]);
        }
    }
    if (ans.size() < N)
        return -1;
    else
    {
        int c = 0;
        for (auto &&i : ans)
        {
            if (c == N-1)
                return i;
            c++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tq;
    cin >> tq;
    while (tq--)
    {
        int l1, l2, N;
        cin >> l1 >> l2;
        int A[l1], B[l2];
        for (int i = 0; i < l1; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < l2; j++)
        {
            cin >> B[j];
        }
        cin >> N;
        cout << nthItem(A, B, l1, l2, N) << "\n";
    }

    return 0;
}