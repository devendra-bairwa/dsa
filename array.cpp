#include <iostream>
using namespace std;
/*
int main()
{

    int arr[10],n,min=INT32_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;


    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
             min=arr[i];

        }

    }
    cout<<min;


}
*/

/*


// lenear search
int lenearsearch(int arr[],int size)
{
    int num,pos;
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter number to be searched :"<<endl;
    cin>>num;
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            cout<<"number is found "<<endl;
            pos=i+1;
            cout<< pos;
        }

    }

return 0;



}
int main()
{
    int arr[20],size;
    cout<<"enter the total number of elements :";
    cin>>size;
    lenearsearch(arr,size);

}

*/

/*

//reverse an array


void reverse(int arr[],int size)
{
   cout<<"array is : ";
      for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<"reverse array is : ";
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[20],size;
    cout<<"enter the total number of elements :";
    cin>>size;
     int num;
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);

}

*/


/*
// how many elements of 1st array are common in second array

void getarr(int arr[], int size)
{
    cout << "enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

void showarr(int arr[],int size)
{
    cout << " elements of array: " ;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout << endl;
}

void showcomm(int arr1[],int arr2[],int size)
{
     for (int i = 0; i <size; i++)
    {
        for (int j = 0; j < size; j++)
              {
                if(arr1[i]==arr2[j])
                {
                    cout<<arr1[i];
                }
              }
    }
}


int main()
{
    int arr1[10], arr2[10], size;

    cout << "enter the size of array :";
    cin >> size;

    cout << "1st array" << endl;
    getarr(arr1, size);

    cout << "2nd array " << endl;
    getarr(arr2, size);


    cout << "1st array" << endl;
    showarr(arr1,size);

    cout << "1st array" << endl;
    showarr(arr2,size);

    showcomm(arr1,arr2,size);

}

*/


int main()
{
    int arr[10],size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
             {
                if(arr[i]==arr[j])
                {
                    if(i==j)
                    continue;
                    cout<<arr[i];
                }

             }
    }


}