#include<iostream>
using namespace std;
//n=4;
//1 2 3 4 3 2 1
void recursion(int i,int n)

{
    
   if(i>n) return ;
    cout<<i<<" ";
    recursion(i+1,n);




    if(i>1)
    cout<<i-1<<" ";


}
int main(){

    int n=4;
    recursion(1,n);
    return 0;

}