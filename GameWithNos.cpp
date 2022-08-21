#include <bits/stdc++.h>
using namespace std;
int* game_with_numbers(int Arr[],int n);
int main()
{   int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
   int Arr1[n];
    for(int i=0; i<n; i++)
    {
        cin>>Arr1[i];
    }
    int*Arr2;

   Arr2=game_with_numbers(Arr1,n);
   for (int i = 0; i < n; i++)
   {
       cout<<Arr2[i]<<" ";
   }
   cout<<endl;
}
    return 0;
}
int* game_with_numbers(int Arr[],int n)
{   for (int i = 0; i < n-1; i++)
{
    Arr[i]=Arr[i]^Arr[i+1];
}
Arr[n-1]=Arr[n-1];
return Arr;
}