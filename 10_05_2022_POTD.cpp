#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortedArrayToBST(vector<int> &nums)
    {
          
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        vector<int> ans = obj.sortedArrayToBST(nums);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}