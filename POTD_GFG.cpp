#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int kThSmallestFactor(int N, int K)
    {
        vector<int> Factor;
        for (int i = 1; i <= N; i++)
        {
            if (N == 1)
            {
                Factor.push_back(1);
            }
            else
            {
                if (N % i == 0)
                {
                    Factor.push_back(i);
                }
            }
        }
        if (K <= Factor.size())
        {
            int kth = Factor[K - 1];
            return kth;
        }
        else
        {
            return (-1);
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        solution ob;
        cout << ob.kThSmallestFactor(N, K) << endl;
    }

    return 0;
}
