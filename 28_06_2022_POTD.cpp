#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
    {

        long long sum = (long long)0;
        sort(A, A + N);
        if (K2 > N)
        {
            for (long long int i = K1; i < N; i++)
            {
                sum += A[i];
            }
        }
        else
            for (long long int i = K1; i < K2-1; i++)
            {
                sum += A[i];
            }
        return sum;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n;
        long long a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
    }
    return 0;
}