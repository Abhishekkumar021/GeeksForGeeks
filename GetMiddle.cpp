#include <bits/stdc++.h>
using namespace std;
class llist
{
public:
    int data;
    llist *next = NULL;
    llist(int b)
    {
        data = b;
    }
};
llist *create(int h)
{
    llist *p = new llist(h);
    return p;
}
//  Recursive Insertion at tail
llist *Insert(llist *head, int val)
{
    if (head == NULL)
        head = create(val);
    else
    {
        head->next = Insert(head->next, val);
    }
    return head;
}
//  Iterative Insertion at tail
llist *insert(llist *head, int d)
{
    if (head == NULL)
        head = create(d);
    else
    {
        llist *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = create(d);
    }
    return head;
}
void display(llist *head)
{
    llist *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int len(llist *head);
int findMiddle(llist *head);

int main()
{
    srand(time(NULL));
    llist *head = NULL, *Head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        head = Insert(head, rand() % 99 + 9);
        Head = insert(Head, rand() % 199 + 99);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     Head=insert(Head,rand()%199+99);
    // }

    cout << "First list " << endl;
    display(head);
    cout << endl;

    cout << "Second list " << endl;
    display(Head);
    cout << endl;

    cout << "Length of first list --> " << len(head) << endl;
    cout << "Length of Second list --> " << len(Head) << endl;

    cout<<"Find Middle --> "<<findMiddle(Head)<<endl;

    return 0;
}

int len(llist *head)
{
    llist *t = head;
    if (t == NULL)
        return 0;
    else
    {
        int l = 0;
        while (t != NULL)
        {
            l++;
            t = t->next;
        }
        return l;
    }
}

int findMiddle(llist *head)
{
    int l = len(head);
    l=(l/2)+1;
   llist*temp=head;
   for(int i=0;i<l-1;i++)
   temp=temp->next;

   return (temp->data);
}