#include <bits/stdc++.h>
using namespace std;
struct Node *partition(struct Node *head, int x);

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        struct Node *head = NULL;
        struct Node *temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            if (i == 0)
            {
                head = new Node(value);
                temp = head;
            }
            else
            {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends

// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node *partition(struct Node *head, int x)
{
    struct Node *t = head,*p=head;
    map<int,int>mp;

    while (t != NULL)
    {
       mp[t->data]++;
        t=t->next;
    }
   for (auto i:mp)
    {
     cout<<i.first<<" -> "<<i.second<<endl;   
    }
    int l;
    for (auto i:mp)
    {
        l=i.second;
        while (l>0)
        {
            p->data=i.first;
            p=p->next;
            l--;
        }
    }
    return head;
}