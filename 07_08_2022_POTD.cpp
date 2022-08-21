/*
Given an array of N positive integers where all numbers occur even number of
times except one number which occurs odd number of times.
Find the exceptional number.
*/

#include <bits/stdc++.h>
using namespace std;
int getOddOccurrence(vector<int> arr, int n)
{
    /*
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for (auto map : mp){
            if(map.second&1)
                return map.first;
        }
    */

    /*
        XOR gives true when both number's bit are different but when both number's bit are similar then it gives false
        1^0=1 -->1
        1 0 ^ 0 1 = 1 1 --> 3
        1 1 ^ 1 1 = 0 0 --> 0
        1 0 ^ 0 0 = 1 0 --> 2
        1 1 ^ 1 0 = 0 1 --> 1
        0 1 ^ 0 1 = 0 0 --> 0
        1 1 ^ 0 0 = 1 1 --> 3

    */

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
        cout << "res " << res << "\n";
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getOddOccurrence(arr, n) << "\n\n";

    return 0;
}