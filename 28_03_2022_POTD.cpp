#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int swapBits(int x, int p1, int p2, int n)
    {
        vector<int> vc;
       for(int i=0;x>0;i++)
       {
           vc.push_back(x%2);
           x=x/2;
       }
        for (int i = 0; i < vc.size();i++)
        {
            cout << vc[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            swap(vc.at(p2 - 1), vc.at(p1 - 1));
            p2--;
            p1--;
        }
        for (int i = 0; i < vc.size(); i++)
        {
            cout << vc[i] << " ";
        }
        cout << endl;
        int dec = 0, b = 1;
        for (int i = 0; i < vc.size(); i++)
        {
            dec = dec + vc[i] * b;
            b *= 2;
        }
        return dec;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, p1, p2, n;
        cin >> x >> p1 >> p2 >> n;
        Solution obj;
        int res = obj.swapBits(x, p1, p2, n);
        printf("%d\n", res);
    }
    return 0;
}