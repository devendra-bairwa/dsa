#include<iostream>
using namespace std;

class node
{
    public:
    int val;
    node* prev;
    node* next;

    node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

class deque
{
    public:
    node* head;
    node* end;
    int size;
    deque()
    {
        head=NULL;
        end=NULL;
        size=0;

    }

    void push_start(int val)
    { 
        node* temp=new node(val);
        if(size==0) head=end=temp;
        else 
        {
            head->prev=temp;
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void push_end(int val)
    {
        
        node* temp=new node(val);
        if(size==0) head=end=temp;
        else 
        {
        end->next=temp;
        temp->prev=end;
        end=temp;
        } 
        size++;
    }

    void pop_start()
    {
         if(size==0) 
         {
         cout<<"underflow";
         return ;
         }
         else{
            head=head->next;
            if(head) head->prev=NULL;
            if(head==NULL) end=NULL;
            
         }
         size--;

    }

    void pop_end()
    {
        if(size==0)
        {
            cout<<"underflow";
            return;
        }
        else if ((size==1))
        {
            pop_start();
            return;
        }
        else
        {
            end=end->prev;
            if(end) end->next=NULL;
        }
        size--;
    }
    void sizze()
    {
        cout<<size;
    }

    void display()
    {
        node* t=head;
        if(size==0) cout<<-1;
        else
        {
            while(t)
            {
                cout<<t->val<<" ";
                t=t->next;
            }
        }


    }

    void front()
    {
         if(size==0) 
         {
         cout<<-1;
         return ;
         }
         else cout<<head->val;
    }
   
   bool empty()
   {
    if(size==0) return true;
    else return false;
   }

};

int main()
{
    deque q;
    cout<<q.size;//0
    cout<<endl;
    
    q.push_start(10);//10
    q.push_start(20);//20 10
    q.push_start(30);//30 20 10
    q.display();     //30 20 10
    cout<<endl;

    q.push_end(40);
    q.push_end(50);
    q.push_end(60);
    q.display();     //30 20 10 40 50 60 
    cout<<endl;

    q.pop_start();
    q.pop_start();
    q.display();     // 10 40 50 60 
    cout<<endl;

    q.pop_end();
    q.pop_end();
    q.display();     // 10 40  
    cout<<endl;

    q.sizze();//2
    cout<<endl;

    q.front();//10
    cout<<endl;

   cout<<q.empty();// false 0

}