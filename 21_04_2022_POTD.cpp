#include <bits/stdc++.h>
using namespace std;
#define ll long
vector<int> convert(ll a)
{
    vector<int> vc;
    ll t;
    while (a)
    {
        t = a % 2;
        a /= 2;
        vc.push_back(t);
    }
    return vc;
}

vector<int> Sum(vector<int> &x, vector<int> &y)
{
    vector<int> ans;
    int b, s, c = 0;
    if (x.size() > y.size())
        b = x.size(), s = y.size();
    else
        b = y.size(), s = x.size();
    for (int i = 0; i < s; i++)
    {
        if (x[i] == 0 && y[i] == 0)
        {
            if (c)
            {
                ans.push_back(1);
                c = 0;
            }
            else
                ans.push_back(0);
        }
        else if (x[i] == 1 && y[i] == 0 || x[i] == 0 && y[i] == 1)
        {
            if (c)
            {
                ans.push_back(0);
                c = 1;
            }
            else
                ans.push_back(1);
        }
        else if (x[i] == 1 && y[i] == 1)
        {
            if (c)
            {
                ans.push_back(1);
                c = 1;
            }
            else
            {
                ans.push_back(0);
                c = 1;
            }
        }
    }
    if(b==y.size())
    {
        for (int i = s; i < b; i++)
        {
            if(c && y[i]==1)
            {
                ans.push_back(0);
                c=1;
            }
            else if(c && y[i]==0)
            {
                ans.push_back(1);
                c=0;
            }
            else if (!c && y[i]==1)
            {
                ans.push_back(1);
            }
            else if (!c&&y[i]==0)
            {
                ans.push_back(0);
            }   
        }
        
    }
    else
    {
        for (int i = s; i < b; i++)
        {
            if(c && x[i]==1)
            {
                ans.push_back(0);
                c=1;
            }
            else if(c && x[i]==0)
            {
                ans.push_back(1);
                c=0;
            }
            else if (!c && x[i]==1)
            {
                ans.push_back(1);
            }
            else if (!c&&x[i]==0)
            {
                ans.push_back(0);
            }
        }
    }
    if (c)
    {
        ans.push_back(1);
        c=0;
    }
return ans;
}

ll dec(vector<int> vc)
{
    ll t,d=0;
    for (int i =0; i<vc.size(); i++)
    {
        t=vc[i]%10;
        d+=t*pow(2,i);
    }
    return d;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    vector<int> v = convert(a);
    vector<int> c = convert(b);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : c)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> A =Sum(v, c);
    for (auto k : A)
    {
        cout << k << " ";
    }
    cout << endl;
    cout<<"Sum --> "<<dec(A)<<endl;
    return 0;
}