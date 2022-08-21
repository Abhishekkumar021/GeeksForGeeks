#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findTime(string s1, string s2)
    {
        int ans = 0, k = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            for (int j = 0; j < s1.length(); j++)
            {
                if (s2[i] == s1[j])
                {
                    ans += abs(k - j);
                    k=j;
                }
            }
        }

        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S1, S2;
        cin >> S1;
        cin >> S2;

        Solution ob;
        cout << ob.findTime(S1, S2) << endl;
    }
    return 0;
}