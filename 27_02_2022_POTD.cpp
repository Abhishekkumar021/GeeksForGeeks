//    https://practice.geeksforgeeks.org/problems/d6e88f06b273a60ae83992314ac514f71841a27d/1

#include <bits/stdc++.h>
using namespace std;

//  Official Solution from Editorial
class Solution
{
public:
    int smallestSubstring(string S)
    {
        bool answerExist = false;
        int lastZero = -1, lastOne = -1, lastTwo = -1;
        int ans = S.size();
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '0')
            {
                lastZero = i;
            }
            else if (S[i] == '1')
            {
                lastOne = i;
            }
            else
            {
                lastTwo = i;
            }

            if (lastZero != -1 && lastOne != -1 && lastTwo != -1)
            {
                answerExist = true;
                ans = min(ans, 1 + i - min(lastZero, min(lastOne, lastTwo)));
            }
        }
        if (answerExist)
        {
            return ans;
        }
        return -1;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}

/*

This the User Solution


class Solution {
  public:
    int smallestSubstring(string S) {
        int r=INT_MAX;
        vector<int>v(3,-1);
        for(int i=0;i<S.size();i++)
        {
         v[S[i]-'0']=i;
           if(v[0]!=-1 && v[1]!=-1 && v[2]!=-1)
            {
             r=min(r,*max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()));
            }
        }
        if(r==INT_MAX)
            return -1;
        else
            return r+1;
    }
};

*/