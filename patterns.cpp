/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

 int i=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

*/

/*
3 2 1
3 2 1 
3 2 1

int i=1,n,k;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            k=n-j+1;
            cout<<k<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

*/


/*
1 2 3
4 5 6
7 8 9

 int i=1,count =1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
*/

/*

*
* *
* * *
* * * *

  int i=1,n;
   cin>>n;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;

*/

/*
1
2 2
3 3 3
4 4 4 4

 int i=1,n;
   cin>>n;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
   }

*/


/*
1
2 3
4 5 6
7 8 9 10


int i=1,n,count=1;
   cin>>n;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
        cout<<count<<" ";
        j++;
        count++;
    }
    cout<<endl;
    i++;
   }


*/

/*
1
2 3
3 4 5
4 5 6 7


   int i=1,n,k;
   cin>>n;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
        k=i+j-1;
        cout<<k<<" ";
        j++;
        
    }
    cout<<endl;
    i++;
   }

*/


/*
1
2 1
3 2 1
4 3 2 1

int i=1,k,n;
    cin>>n;
    while(i<=n)
    {
        k=i;
        int j=1;
        while(j<=i)
        {
            cout<<k<<" ";
            j++;
            k--;

        }
        i++;
        cout<<endl;
        
    }

*/


/*
A A A
B B B
C C C

int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    

*/


/*
A B C
A B C
A B C

int i=1,n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

    
*/

/*
A B C
D E F 
G H I

  int i=0,n;
    cin>>n;
    char ch='A';
    while(i<=n)
    {
        
        int j=1;
        while(j<=n)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
*/

/*
A B C
B C D
C D E

   int i=1,n;
    cin>>n;
    int j;
    
    while(i<=n)
    {
         j=1;
         
        while(j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

*/

/*
A 
B B 
C C C

int n,i=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch ='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;

        }
*/

/*
A
B C
D E F
G H I J

int i=1,n;
    char count ='A';
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
*/


/*
A
B C
C D E
D E F G

 int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }

*/


/*
D 
C D
B C D
A B C D

 int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        char ch='D'+j-i;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
   


*/

/*
    *
   **
  ***
 ****
 
 int n,i=1;
    cin>>n;
   
    while(i<=n)
    {
         //print space first
         int space=n-i;
         while(space)
         {
            cout<<" ";
            space--;
         }

         //print pattern
         int j=1;
         while(j<=i)
         {
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;
         

    }
*/

/*

****
***
**
*


    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        //;
        while(j<=n-i+1)
        {
            
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
   

*/


/*
/*

****
 ***
  **
   *
    
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space++;
            
        }
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
  
    return 0;

}