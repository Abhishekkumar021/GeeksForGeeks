#include <bits/stdc++.h>
using namespace std;
class ll
{
public:
    int data;
    ll *next = NULL;
    ll(int y)
    {
        data = y;
    }
};
ll *create(int t)
{
    ll *ptr = new ll(t);
    return ptr;
}

ll *insert(ll *&head, int p)
{
    if (head == NULL)
        head = create(p);
    else
        head->next = insert(head->next, p);

    return head;
}

void display(ll *&head)
{
    if (head != NULL)
    {
        cout << head->data << " ";
        display(head->next);
    }
}

bool isLoop(ll *&head)
{
    ll *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

void createLoop(ll *&head, int num)
{
    if (head != NULL)
    {
        int t = 1;
        ll *temp, *ptr = head;
        while (ptr->next != NULL)
        {
            if (t == num)
            {
                temp = ptr;
            }
            t++;
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void Remove(ll *&head);
void removeLoop(ll *head);
int main()
{
    srand(time(NULL));
    ll *head = NULL;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        // head = insert(head, (rand() % 50 + 10));
        head = insert(head, num);
    }
    display(head);
    cout << endl;

    int pos;
    cin >> pos;

    createLoop(head, pos);
    if (isLoop(head))
        cout << "Loop found " << endl;
    else
        cout << "Loop is not found " << endl;
    // Remove(head);
    removeLoop(head);
    display(head);
    cout << endl;
    return 0;
}

void removeLoop(ll *head)
{
    if (isLoop(head))
    {
        ll *fast = head, *slow = head;
        while (fast != NULL || fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                break;
            }
        }
        if (slow == head)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else if (slow == fast)
        {
            fast = head;
            while (fast->next != slow->next)
            {
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = NULL;
        }
    }
    else
        return;
}

void Remove(ll *&head)
{
    ll *fast = head, *slow = head;
    if (head != NULL)
    {
        while (fast != NULL || fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                fast = head;
                break;
            }
        }
        while (fast->next != slow->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = NULL;
    }
}

/*
// { Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


 // } Driver Code Ends

structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
    if(isLoop(head))
    {
        Node*fast = head, *slow = head;
        while (fast != NULL || fast != slow)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                break;
            }
        }
        if(slow==head)
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
        fast->next=NULL;
        }
        else if(slow==fast)
        {
            fast=head;
        while (fast->next != slow->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = NULL;
    }
    }
    else
    return;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
  // } Driver Code Ends
  */