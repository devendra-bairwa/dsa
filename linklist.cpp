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
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);

    a->next= b;
    b->next= c;
    c->next= d;

    display(a);

    
    return 0;
}