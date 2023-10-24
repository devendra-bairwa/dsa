#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node* next;

    node(int head)
    {
        this->val=head;
        this->next=NULL;
    }

  
};
  node* head;

  void insertatend(node* head,int val)
        {
        node* t= new node (val);
        while(head->next!=NULL) head=head->next;
        head->next=t;


        }

void display(node* a)
{
    node* temp=a;
   
        
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

   void deleteathead()
    {
         head=head->next;
    }

     void deleteatend()
    {
    node* temp=head;
       while (temp->next->next!=NULL)
       {
        temp=temp->next;
       }
       temp->next=NULL;
       
    }

    void deleteatidx(int idx)
    {
        node*temp=head;
        for(int i=0;i<idx-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }


int main()
{
    // node* head;
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);

    a->next= b;
    b->next= c;
    c->next= d;

    head=a;
    display(a);
    cout<<endl;

    // deleteathead();
    // display(head);
    // cout<<endl;
    
    // deleteatend();
    // display(a);
    // cout<<endl;

    // deleteatidx(2);
    // display(a);
    // cout<<endl;
    return 0;
}