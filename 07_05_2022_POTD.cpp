#include <bits/stdc++.h>
using namespace std;
class ll
{
public:
    int data;
    ll *next;
    ll(int n)
    {
        data = n;
        next = NULL;
    }
};
ll *create(int d)
{
    ll *t = new ll(d);
    return t;
}
ll *insert(ll *h, int k)
{
    if (h == NULL)
    {
        return h = new ll(k);
    }
    h->next = insert(h->next, k);
}

void display(ll *h)
{
    if (h)
    {
        cout << h->data << " ";
        display(h->next);
    }
}
int len(ll *h)
{
    if (h == NULL)
        return 0;
    return 1 + len(h->next);
}

ll *sortedMerge(ll *&h, ll *&H)
{
    ll *t, *head = new ll(-1);
    t = head;
    while (h != NULL && H != NULL)
    {
        if (h->data < H->data)
        {
            t->next = h;
            h = h->next;
        }
        else
        {
            t->next = H;
            H = H->next;
        }
        t = t->next;
    }
    while (h != NULL)
    {
        t->next = h;
        h = h->next;
        t = t->next;
    }
    while (H != NULL)
    {
        t->next = H;
        H = H->next;
        t = t->next;
    }
    t->next = NULL;
    return head->next;
}
int main()
{
    srand(time(NULL));
    int n;
    cout << "\nEnter your number of nodes " << endl;
    cin >> n;
    ll *Head = NULL;
    ll *head = NULL;
    
    for (int i = 1; i <= n; i++)
    {
        Head = insert(Head, i);
    }

    for (int i =0; i < n/2; i++)
    {
        head=insert(head,i);
    }
    
    cout << "First List " << endl;
    display(Head);
    cout << endl;

    cout << "Second List " << endl;
    display(head);
    cout << endl;

    cout << "\nList 1 --> " << len(Head) << endl;
    cout << "\nList 2 --> " << len(head) << endl;

    ll *New = sortedMerge(Head, head);
    cout << "New List " << endl;
    display(New);
    cout << endl;
    cout << "\nNew List --> " << len(New) << endl;
    return 0;
}