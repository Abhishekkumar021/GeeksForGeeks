#include<bits/stdc++.h>
using namespace std;
class llist{
    public:
    int data;
    llist*next;
    llist(int d)
    {
        data=d;
        next=NULL;
    }
};
llist*create(int k)
{
    llist*pt=new llist(k);
    return pt;
}
llist*insert(llist*head,int k)
{
    llist*h=head;
    if(h==NULL)
    h=create(k);
    else{
        h->next=insert(h->next,k);
    }
    head=h;
    return head;
}
void display(llist*head)
{
    if(head!=NULL)
    {
        cout<<head->data<<" ";
        display(head->next);
    }
}
int main()
{
    srand(time(NULL));
 int n;
 cin>>n;
 llist*Head=NULL;
 for(int i=0;i<n;i++)
 {
     Head=insert(Head,rand()%96);
 }
display(Head);
cout<<endl;

return 0;
}
llist* removeZeros(llist*head)
{
    llist*h=head,*temp,*ptr,*prev1,*next1,*prev2,*next2;
    if(h==NULL)
    return h;
    else{
        while (h!=NULL)
        {
            if(h->data==0)
            {
                prev1->next=h;
                
            }
        }
        
    }
}