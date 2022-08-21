#include <bits/stdc++.h>
using namespace std;
//  10
// 4 4 6 1 4 7 2 1 9 1

class Solution {
  public:
    void reArrange(vector<int>&a, int n) {
        int i=0,j=1;
     while (j < n && i < n)
    {
        while(a[i]%2==0)
            i+=2;
        while(a[j]%2!=0)
            j+=2;
        swap(a[i],a[j]);
    }
}
};

int main()
{
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    Solution so;
    so.reArrange(vc,n);
    for (auto i : vc)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}