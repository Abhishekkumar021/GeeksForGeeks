#include <bits/stdc++.h>
using namespace std;
void Rotate(vector<vector<int> >&Matrix)
{       int n=Matrix.size();
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
           swap(Matrix[i][j], Matrix[j][i]);
       }
    }
    for (int i = 0; i < n/2; (i++))
    {
        for (int j = 0; j <n ; j++)
        {
          swap(Matrix[i][j],Matrix[n-1-i][j]);
        }
        
    }
    
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> Matrix(n);
        for (int i = 0; i < n; i++)
        {
            Matrix[i].resize(n);
            for (int j = 0; j <n ; j++)
            {
                cin >> Matrix[i][j];
            }
        }
        Rotate(Matrix);
        cout<<endl<<endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<Matrix[i][j]<<" ";
            }
             cout<<endl;
        }
    }
    return 0;
}