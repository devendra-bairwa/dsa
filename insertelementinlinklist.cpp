#include<iostream>
using namespace std;
//making a link list
class node
{
    public:
    int val;
    node* next;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
    

};
class linklist
{   
    public:
    node* start;
    node* last;
    int size;

    linklist()
    {
        start=last=NULL;
        size=0;
    }

    void insertatend(int val)
    {
        node* temp=new node(val);
        if(size==0) start=last=temp;
        else
        {
            last->next=temp;
            last=temp;
        }
        size++;
    }

    void display()
    {
        node* temp= start;
        // if(temp->next==NULL)
        // return;
        while(temp!=NULL)
        {
        cout<<temp->val<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }


   

};

int main()
{
    linklist ll;
    ll.insertatend(10);
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatend(40);
    ll.insertatend(50);
    ll.insertatend(60);
    ll.display();
   // cout<<ll.size;

    return 0;
}