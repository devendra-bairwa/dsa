#include<iostream>
using namespace std;

void recursion(int a,int b,int &sum)

{
    
    
    
   if(a>b) return ;
   if(a%2!=0) 
   {
    sum =sum+ a;
    
    recursion(a+2,b,sum);
   }
   else{
recursion(a+1,b,sum);
   }
  
   
}
int main(){

    int a=2;
    int b=10;
    int sum =0;
    recursion(a,b,sum);
    cout<<sum;
    
    return 0;

}