#include <bits/stdc++.h>
using namespace std;
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution
{
    int minEle;
    stack<int> s;

public:
    int getMin()
    {
        if (s.empty() != true)
            return minEle;
        else
            return -1;
    }

    int pop()
    {
        if (s.empty())
            return -1;
        else
        {
            int min = s.top();
            s.pop();
            if (min >= minEle)
                return min;
            else
            {
                minEle = 2 * minEle - min;
                return (minEle + min) / 2;
            }
        }
    }

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            minEle = x;
        }
        else
        {
            if (x >= minEle)
            {
                s.push(x);
            }
            else
            {
                s.push(2 * x - minEle);
                minEle = x;
            }
        }
    }
};

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution ob;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {

                int att;
                cin >> att;
                ob.push(att);
            }
            else if (qt == 2)
            {

                cout << ob.pop() << " ";
            }
            else if (qt == 3)
            {

                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
