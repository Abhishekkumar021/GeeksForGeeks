#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string findAndReplace(string S, int Q, int index[], string sources[], string targets[])
    {
        int c = 0, k = 0, len, j, t = 0, p;
        for (int i = 0; i < Q; i++)
        {
            k = 0, len = sources[i].length(), c = 0;
            if (t == 0)
                p = j = index[i];
            else
            {
                p = j = (index[i] + t);
            }
            while (len--)
            {
                if (S[j++] == sources[i][k++])
                    c++;
                else
                    break;
            }
            if (sources[i].length() == c)
            {
                S.replace(p, c, targets[i]);
                if (targets[i].length() >= c)
                    t += (targets[i].length() - c);
                else if (targets[i].length() < c)
                {
                    t = t - (c - targets[i].length());
                }
            }
        }
        return S;
    }
};
/*
1
gforks
2
0 4
g ks
geeks geeks
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        int Q;
        cin >> Q;
        int index[Q];
        string sources[Q], targets[Q];

        for (int i = 0; i < Q; i++)
            cin >> index[i];
        for (int i = 0; i < Q; i++)
            cin >> sources[i];
        for (int i = 0; i < Q; i++)
            cin >> targets[i];

        Solution ob;
        cout << ob.findAndReplace(S, Q, index, sources, targets) << endl;
    }
    return 0;
}