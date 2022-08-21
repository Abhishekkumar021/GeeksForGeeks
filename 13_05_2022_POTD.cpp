#include <bits/stdc++.h>
using namespace std;
vector<int> Maximum(vector<int> &a, vector<int> &A, int n)
{
    vector<int> ans;
    set<int> st(A.begin(), A.end()); // Putting Second Array Elements in set at declaration time
    //  putting all the Elements of first Array in set
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    //    Erasing All the elements from beging to reduce the size  for making equal to the given size.
    //  set store elements in Ascending manner
    while (st.size() > n)
    {
        st.erase(*st.begin());
    }
    //     now setting the Second Array elements position according to question requirement
    for (int i = 0; i < n; i++)
    {
        auto it = st.find(A[i]); // Checking if this element is present then we set their position
        if (it != st.end())      // if element will present then pointer will return true else it does not go inside the if block
        {
            ans.push_back(A[i]);
            st.erase(A[i]);
        }
    }

    //     now setting the first Array elements position according to question requirement
    for (int i = 0; i < n; i++)
    {
        auto it = st.find(a[i]); // Checking if this element is present then we set their position
        if (it != st.end())      // if element will present then pointer will return true else it does not go inside the if block
        {
            ans.push_back(a[i]);
            st.erase(a[i]);
        }
    }
    return ans;
}
int main()
{
    srand(time(NULL));
    int x;
    cin >> x;
    vector<int> arr1(x);
    vector<int> arr2(x);
    for (int i = 0; i < x; i++)
    {
        arr1[i] = 1 + rand() % 50;
    }
    for (int i = 0; i < x; i++)
    {
        arr2[i] = 1 + rand() % 50;
    }

    vector<int> res = Maximum(arr1, arr2, x);
    for (auto &&i : res)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}