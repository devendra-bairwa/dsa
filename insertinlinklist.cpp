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


node* insertatstart(node* head,int val)
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
    return head;
}

void insertatmiddle(int idx,int val)
{
    if(idx<0/*if size is given then one more also idx>size*/ ) cout<<"invalid number"<<endl;
   // else if(idx==0) insertatstart(head,val);//starting idx hoto
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

void display(node* a)
{
    node* temp=a;
   
        
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
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

    // insertatend(a,50);
    // cout<<endl;
    // display(a);

    //  head=insertatstart(head,90);
    // cout<<endl;
    // display(head);

    // insertatmiddle(0,25);
    // cout<<endl;
    // display(a);

    
    return 0;
}