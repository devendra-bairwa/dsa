#include <iostream>
using namespace std;

void ary()
{
    int arr1[] = {1, 4, 5, 8};
    int arr2[] = {2,3,6,12};
     int a = size(arr1);
     int b = size(arr2);
    
    int n = a+b;
    int k = 0, i = 0, j = 0;
    int arr3[n];
   

    while (i < a && i < b)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    if(i==a)
  
{
 while (j < b)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    
}

   if(j==b)
  

   {
    while (i < a)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }

   }
        
    

    
       

    

    for (int k = 0; k < n; k++)
    {
        cout << arr3[k] << " ";
    }

    //1   2   4   5    8   12
}

int main()
{

    ary();
}



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     char ch='a';

//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<char(ch+i)<<" ";
//         }
//         cout<<endl;
//     }
// }
