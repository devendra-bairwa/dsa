#include<iostream>

using namespace std;
int main()
{
    string str1,str2="";
    getline(cin,str1);

    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>='X')
        {
            str2=str2+str1[i];
        }
    }
    cout<<str2<<endl;

    // for(int j=0;j<str2.length();j++)
    // {
    //     if(str2[j]<str2[j+1])
    //     swap(str2[j],str2[j+1]);
    // }

//ACCENDING

    for(int j=1;j<str2.length();j++)
    {   
        for(int i = 0;i<str2.length()-j;i++){

            if(str2[j]<str2[j+1]){
                swap(str2[j],str2[j+1]);
            }
        }
         
//DECENDING
    //  for(int j=1;j<str2.length();j++)
    // {   
    //     for(int i = 0;i<str2.length()-j;i++){

    //         if(str2[i] >str2[i+1]){
    //             swap(str2[i],str2[i+1]);
    //         }
    //     }
         
    }

    cout<<str2;

    return 0;


}