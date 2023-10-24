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
  

  void insertatend(node* &head,int val)
        {    node* newnode= new node (val);
            if(head==NULL)
            {
                head=newnode;
            }
            else{
                node* temp =head;
                while(temp->next!=NULL) temp=temp->next;
                temp->next=newnode;
            }

        }


void insertatstart(node* &head,int val)
{
    node* temp=new node(val);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
   
}

void insertatmiddle(node* &head,int idx,int val)
{
    
    if(idx<0/*if size is given then one more also idx>size*/ ) cout<<"invalid number"<<endl;
    // else if(idx==0)
    // {
    //     insertatstart(head,val);
    //     return;
    // } 
    //else if(idx==size)then insertatend( head, val);
    else{

    node* t=new node(val);
    node*temp=head;
    for(int i=0;i<=idx-1;i++)
    {
        temp=temp->next;
    } 
    t->next=temp->next;
    temp->next=t;
    }
    }

void display(node* head)
{
    node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

int main()
{
     //node* head;
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    
    a->next= b;
    b->next= c;
    c->next= d;

    node* head=NULL;
    head=a;
    display(head);

    // insertatend(head,50);
    // cout<<endl;
    // display(head);

    // insertatstart(head,90);
    // cout<<endl;
    // display(head);

    insertatmiddle(head,0,25);
    cout<<endl;
    display(a);

    
    return 0;
}