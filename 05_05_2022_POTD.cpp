#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    vector<int> vc(n);
    for (auto i = 0; i < n; i++)
    {
        vc[i] = 1 + rand() % 100;
    }
    for (auto &&j : vc)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}