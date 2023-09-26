#include<iostream>
using namespace std;
int main()
{
   /* int a=2;
    int b=a+1;
    if((a=3)==b)
    {
        cout<<a;
    }
    else 
    {
        cout<<a+1;
    }


    int a=9;
    if(a==9)
    {
        cout<<"niney";

    }
    if(a>0)
    {
        cout<<"positive";

    }
    else 
    {
        cout<<"negative";
    }

    int a=24;
    if(a>20){
        cout<<"love";
    }
    else if(a==24){
        cout<<"lovely";}
    else
        {
            cout<<"babbar";
        }
    */

   int sum =0,i=0,n=10;

   while(i<=n )
   {

   
   if (i%2==0)
   {
    cout<<i<<" "<<endl;
    sum=sum+i;
   }
   i++;
   }

    cout<< sum<<endl;
}