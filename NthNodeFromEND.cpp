#include <bits/stdc++.h>
using namespace std;
class llist
{
public:
    int val;
    llist *next = NULL;
    llist(int y)
    {
        val = y;
    }
};
llist *create(int u)
{
    llist *ptr = new llist(u);
    return ptr;
}
void insert(llist *&head, int m)
{
    if (head == NULL)
        head = create(m);
    else
        insert(head->next, m);
}

void display(llist *&head)
{
    if (head != NULL)
    {
        cout << head->val << " ";
        display(head->next);
    }
}
int length(llist *&head)
{
    if (head == NULL)
        return 0;
    else
        return (1 + length(head->next));
}

int NthNodeDATA(llist *&head, int pos)
{
    int l = length(head);
    if (pos > l || pos <= 0)
        return (-1);
    else if (pos == 1)
    {
        while (head->next != NULL)
        {
            head = head->next;
        }
        return (head->val);
    }
    else
    {
        int c = 1, diff = l - pos;
        while (head != NULL)
        {
            if (pos == l)
            {
                return (head->val);
                break;
            }
            if (c == diff)
            {
                return (head->next->val);
                break;
            }
            else
                c++;
            head = head->next;
        }
    }
}

llist *reverse(llist *head);
int NthNodeData(llist*head,int k);

int main()
{
    srand(time(NULL));
    llist *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        insert(head, rand() % 99 + 9);
    }
    display(head);
    cout << endl;

    cout << length(head) << endl;

    int p;
    cin >> p;
    cout << NthNodeDATA(head, p) << endl;

 head = reverse(head);
    display(head);
    cout << endl;

    cout<<NthNodeData(head,p)<<endl;

    return 0;
}

//  Other Solutio of Fnding nth node from end

llist *reverse(llist *head)
{
    llist *cur = head, *nexttemp, *prev = NULL;

    while (cur != NULL)
    {
        nexttemp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nexttemp;
    }
    return prev;
}

int NthNodeData(llist*head,int k)
{
    
    while(k!=1)
    {
        head=head->next;
        k--;
    }
    return (head->val);
}