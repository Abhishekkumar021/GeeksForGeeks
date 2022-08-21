//    https://practice.geeksforgeeks.org/problems/a4f19ea532cee502aabec77c07e0d0a45b76ecf9/1

#include <bits/stdc++.h>
using namespace std;

// This is user solution

class Solution
{
public:
    int build_bridges(string s1, string s2)
    {
        vector<vector<int>> matrix;
        int i, j;
        vector<int> mat;
        mat.push_back('0');
        mat.push_back('0');
        for (i = 0; i < s2.size(); i++)
        {
            mat.push_back(s2[i]);
        }
        matrix.push_back(mat);
        mat.clear();
        mat.push_back('0');
        mat.push_back('0');
        for (i = 0; i < s2.size(); i++)
        {
            mat.push_back('0');
        }
        matrix.push_back(mat);
        mat.clear();

        for (i = 0; i < s1.size(); i++)
        {
            mat.push_back(s1[i]);
            for (j = 0; i < s2.size(); i++)
            {
                mat.push_back('0');
            }
            matrix.push_back(mat);
            mat.clear();
        }
        for (i = 2; i < matrix.size(); i++)
        {
            for (j = 2; j < matrix[i].size(); j++)
            {
                if (matrix[i][0] == matrix[0][i])
                {
                    matrix[i][j] = 1 + matrix[i - 1][j - 1];
                }
                else
                {
                    matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
                }
            }
        }
        return matrix[i - 1][j - 1] - 48;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        cout << obj.build_bridges(str1, str2) << endl;
    }
    return 0;
}
