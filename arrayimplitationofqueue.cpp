#include<iostream>

using namespace std;

class queue{
    public:
    int f;
    int b;
   
    int arr[5];
    queue()
    {
        f=0;
        b=0;
    }

    int s=sizeof(arr)/sizeof(arr[0]);
   
    void push(int val)
    {
        if(b==s) cout<<"overflow";
        else{
            arr[b]=val;
            b++;
        }
    }

    void pop()
    {  
         if(b-f==0)
         {
         cout<<"underflow"; 
         
         return;
         }
         f++;
       
    }

    bool empty()
    {
        if(s==0) return true;
        else return false;

    }

    void size()
    {
        cout<<b-f;
    }
    void front()
    {
        if(s==0) cout<<-1;
        else cout<<arr[f];
    }

    void display()
    {
        for(int i=f;i<b;i++)
        {
            cout<<arr[i]<<" ";
            
        }
           
    }

};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();//10 20 30 40 50
    cout<<endl;

    q.pop();//10

    q.display();//20 30 40 50
    cout<<endl;

    cout<<q.empty();//false 0
    cout<<endl;

    q.size();//4
    cout<<endl;
    
    q.front();//20

    

}