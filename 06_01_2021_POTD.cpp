#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    string longestCommonPrefix(string arr[], int N)
    {
        string prefix = arr[0], ans="";
        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (prefix[j] == arr[i][j])
                {
                    ans += prefix[j];
                }
                else
                {
                    break;
                }
            }
            prefix=ans;
            ans="";
        }
        if(prefix=="")
        return "-1";
        else
        return prefix;
    }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}