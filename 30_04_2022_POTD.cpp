#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> SolveQueris(string str, vector<vector<int>> Query)
    {
        vector<int> ans;
        int k, l,c;
        map<char,int,greater<int>>mp;
        for (int i = 0; i < Query.size(); i++)
        {
            k = Query[i][0];
            l = Query[i][1];
            for (int j = k-1; j <l-1; j++)
            {
                if(!mp[str[j]])
                    mp[str[j]]++;
            }
            c=0;
            ans.push_back(mp.size());
        for (auto m : mp)
        {
            cout<<m.first<<" --> "<<m.second<<endl;
            if(m.second==1)
                c++;
        }
        // ans.push_back(c);
        }
        return ans;
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        int q;
        cin >> q;
        vector<vector<int>> Query;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            Query.push_back({l, r});
        }
        Solution obj;
        vector<int> ans = obj.SolveQueris(str, Query);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    
        return 0;
    }
}