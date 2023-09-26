#include <iostream>
#include <math.h>
using namespace std;
int main()
/*
{
    int a = 10, b = 1;
    if (++a)
    // 11
    // which is true
    {
        cout << b;
        // 1
    }
    else
        cout << ++b;
    // 2

    return 0;
}

*/

/*


{
    int a=1,b=2;
    if(a-- >0 && ++b >2)
    //1>0 && 3>2
    //true
    {
        cout<<"stage1 - inside if";
    }
    else{
        cout<<"stage2 - inside else";
    }
    cout<<a<< " "<<b<<endl;
    //0    3


    return 0;
}

*/
/*

{
    int a=1,b=2;
    if(a-- >0 || ++b >2)
    //1>0 ||  2nd condition is not even checked because 1st one is true
    //true
    {
        cout<<"stage1 - inside if";
    }
    else{
        cout<<"stage2 - inside else";
    }
    cout<<a<< " "<<b<<endl;
    //0    2


    return 0;
}



{
    int number =3;
    cout<<(25*(++number));
    //25*4
}

{
    int a=1;
    int b=a++;
    //b=1 a=2
    int c=++a;
    //c=3 a=3
    cout<<b;
    //1
    cout<<c;
    //3
}



{
    //fibnacii
    int a=0,b=1,n,c;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}

*/

/*

{
    //prime
    int n;
    cin>>n;
    bool isprime=1;

    for(int i=2;i<n;i++)
    {
       if( n%i == 0)
       {
        isprime = 0;

        break;

       }
    }

    if(isprime == 0)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }

    return 0;
}

*/
/*
{
    for(int i=0;i<=5;i--)
    {
        cout<<i<<" ";
        i++;
        //infinite loop 000000

    }

}

*/
/*
{
    for(int i=0;i<=15;i+=2)
    {
        cout<<i<<" ";

        if(i&10)
        {
            continue;
        }
        i++;
    }
}

{
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
        cout<<endl;
    }
}*/
/*
{
    int a=10;
    int &r=a;
    r++;
    cout<<a<<r;
}

{
    int reminder;
    int n,sum=0,product=1;
    cin>>n;
    while(n>0)
    {
         reminder=n%10;

        sum=reminder+sum;

        n=n/10;
    product=product*reminder;


    }

    cout<<product-sum;
}



{
    int n;
    cin>>n;
    int bit,ans,i=0;
    while(n!=0)
    {
        bit= n&1;
        cout<<" bit "<<bit<<endl;
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;

    }
    cout<<" ans "<<ans<<endl;

}

{
    int n,m, mask=0;
    cin>>n;
    m=n;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }

    int ans= (~n)&mask;
    cout<<ans;
}
*/

/*
{
    int a , b , count = 0, num = 0;
     cin>>a>>b;
    while (b != 0 && a!=0)
    {

        if (b & 1 == 1)
        {
            num++;
            
            cout << num << endl;
        }
        b = b >> 1;

         if (a & 1 == 1)
        {
            count++;
            
            cout << count << endl;
        }
        a = a >> 1;
    }
//or we can do these 


    while (a != 0)
    {
        if (a & 1 == 1)
        {
            count++;
            
            cout << count << endl;
        }
        a = a >> 1;
    }

    while (b != 0)
    {

        if (b & 1 == 1)
        {
            num++;
            
            cout << num << endl;
        }
        b = b >> 1;

    }






    cout << endl;
    cout << "num =  " << num << " count = " << count << endl;
    cout << num + count;

    return 0;
}

*/
{
}
