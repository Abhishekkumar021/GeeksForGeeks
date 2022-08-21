#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string findSum(string x, string y)
    {

        int i = x.length() - 1;
        int j = y.length() - 1;
        long long carry = 0;
        if (i > j)
        {

            while (i >= 0 && j >= 0)
            {
                carry += ((x[i] - '0') + (y[j] - '0'));

                if (carry > 9)
                {
                    x[i] = ((carry % 10) + '0');
                    carry /= 10;
                    i--, j--;
                }
                else
                {
                    x[i] = (carry + '0');
                    carry = 0;
                    i--, j--;
                }
            }
            while (carry >= 0 && i >= 0)
            {
                carry += (x[i] - '0');
                x[i] = (carry % 10) + '0';
                carry /= 10;
                i--;
            }
            if(carry==0 & i>=0)
                return x;
            bool flag=false;
            while (carry > 0)
            {
                x.push_back(((carry % 10) + '0'));
                carry /= 10;
                i--;
                flag=true;
            }
            if(flag){
                for (int k = x.length() - 1; k > 0; k--){
                    swap(x[k-1], x[k]);
                }

            return x;
            }
            return x;
        }
        else
        {
            while (i >= 0 && j >= 0)
            {
                carry += ((x[i] - '0') + (y[j] - '0'));

                if (carry > 9)
                {
                    y[j] = ((carry % 10)+'0');
                    carry /= 10;
                    i--, j--;
                }
                else
                {
                    y[j] = (carry + '0');
                    carry = 0;
                    i--, j--;
                }
            }
            while (carry >= 0 && j >= 0)
            {
                carry += (y[j] - '0');
                y[j] = (carry % 10) + '0';
                carry /= 10;
                j--;
            }
            if(carry==0&&j>=0)
                return y;
            bool flag=false;
            while (carry > 0)
            {
                y.push_back(((carry % 10) + '0'));
                carry /= 10;
                flag=true;
            }
            if(flag){
                for (int k = y.length() - 1; k > 0; k--){
                    swap(y[k-1], y[k]);
                }
                return y;
            }
            return y;
        }

        // int i = x.length()-1;
        // int j = y.length()-1;
        // int carry = 0;

        // string ans;
        // while (i >= 0 && j >= 0)
        // {
        //     carry += ((x[i] - '0') + (y[j] - '0'));

        //     if (carry > 9)
        //     {
        //         cout << "\nExecuted if block in main while \n";
        //         ans.push_back((carry % 10) + '0');
        //         carry /= 10;
        //         i--, j--;
        //     }
        //     else
        //     {
        //         cout << "\nExecuted else block in main while \n";
        //         ans.push_back((carry) + '0');
        //         carry = 0;
        //         i--, j--;
        //     }
        // }
        // while (carry >= 0 && i >= 0)
        // {
        //     carry += (x[i] - '0');

        //     if (carry > 9)
        //     {
        //         cout << "\nExecuted if block in I&carry while \n";
        //         ans.push_back((carry % 10) + '0');
        //         carry /= 10;
        //         i--;
        //     }
        //     else
        //     {
        //         cout << "\nExecuted else block in I&carry while \n";
        //         ans.push_back((carry) + '0');
        //         carry = 0;
        //         i--;
        //     }
        // }

        // while (carry >= 0 && j >= 0)
        // {
        //     carry += (y[j] - '0');

        //     if (carry > 9)
        //     {
        //         cout << "\nExecuted if block in J&carry while \n";
        //         ans.push_back((carry % 10) + '0');
        //         carry /= 10;
        //         j--;
        //     }
        //     else
        //     {
        //         cout << "\nExecuted else block in J&carry while \n";
        //         ans.push_back((carry) + '0');
        //         carry = 0;
        //         j--;
        //     }
        // }

        // while (carry != 0)
        // {
        //     cout << "\nExecuted carry while \n";
        //     ans.push_back((carry % 10) + '0');
        //     carry /= 10;
        // }
        // reverse(ans.begin(), ans.end());

        // return ans;
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
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}