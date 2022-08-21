#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int largest(vector<int> &arr, int n)
    { int large=arr[0];
        for (int i = 0; i < n; i++)
        {
            if (large<arr[i])
            {
            large=arr[i];
            }
            
        }
        return large;
        
    }
};
int main()
{   int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    vector<int>Arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>Arr[i];
    }
    solution ob;
   cout<< ob.largest(Arr,n)<<"\n";
}
    return 0;
}