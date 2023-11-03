#include<iostream>
using namespace std;

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

class queue
{
    public:
    node* head;
    node* tail;
    int size=0;

    queue()
    {
        head=tail=NULL;
    }

    void push(int val)
    {
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void pop()
    {
        if(size==0) cout<<"underflow"<<endl;
        else
        {
            head=head->next;
            size--;
        }

    }

    void display()
    {
        node* t=head;
        while(t)
        {
            cout<<t->val<<" ";
            t=t->next;
        }
    }

    bool empty()
    {
        if(size==0) return true;
        else return false;
    }

    void sizze()
    {
       cout<< size;
    }

    void front()
    {
        cout<<head->val;
    }
};

int main()
{
   
    queue q;
    cout<<q.empty();
    cout<<endl; //true 1

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();//10 20 30 40 50 
    cout<<endl;

    q.pop();   //10
    q.pop();   //20
    q.display();// 30 40 50
    cout<<endl;

    cout<<q.empty(); //false 0
    cout<<endl;
  
    q.sizze();//3
    cout<<endl;

    q.front();//30
    cout<<endl;

    return 0;
}

