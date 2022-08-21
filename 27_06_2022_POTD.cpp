#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long bitCount(int n)
    {
        vector<int> ans;
        long long dec = 0;
        while (n)
        {
            if (n % 2 == 0)
                ans.push_back(1);
            else
                ans.push_back(n % 2);
            n /= 2;
        }
        cout<<"\nSize of Bits Array --> "<<ans.size()<<"\n";
        for (int i = 0; i < ans.size(); i++)
        {
            dec += pow(2, (i * ans[i]));
        }

        return dec;
    }

    vector<int> changeBits(int N)
    {
        vector<int> ans;
        ans.push_back((bitCount(N) - N));
        ans.push_back(bitCount(N));

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout << ans[0] << " " << ans[1] << endl;

        ob.bitCount(N);
    }
    return 0;
}