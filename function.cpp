#include <iostream>
using namespace std;

/*//1
    void update (int a)
    {
        a=a/2;
    }

    int main()
    {
        int a=10;
        update(a);
        cout<<a<<endl;
    }



   int update(int a)
   {
    int ans=a*a;
    return ans;
   }
   int main()
   {
    int a=14;
    a=update(a);
    cout<<a<<endl;

   }


  int main()
  {
    int arr[4]={1};
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
  }

  */

void inputarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

void printarr(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        //total of array elements
        total = total + arr[i];
        
    }

    cout << endl;
   

    cout << "total of array is :" << total<<endl;
}




int main()
{
    int arr[6], size;
    cout << "enter the number of elements :" << endl;
    cin >> size;
    //input
    inputarr(arr, size);
    // array
    printarr(arr, size);
  
    // size of array
     int s=sizeof(arr)/sizeof(int);
     cout<<"size of array is : "<<s<<endl;


    
}
