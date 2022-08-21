#include <bits/stdc++.h>
using namespace std;
// static int ans[20];
int maxCoins(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = n - 1; i >=0; i -= 2)
    {
        ans.push_back(max(arr[i], arr[i - 1]));
    }
    int sum = 0;

    for (int i = 0; i < ans.size(); i++)
    {
        sum += ans[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // memset(ans,-1,20);
    cout << maxCoins(arr, n) << "\n\n";

    return 0;
}