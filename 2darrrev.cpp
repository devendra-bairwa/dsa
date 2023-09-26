#include <iostream>
using namespace std;

void array()
{
   
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "reverse in odd even " << endl;
    int i;

    for (i = 2; i >=0; i--){

    
        if (i % 2 == 0)
        {
             for (int j = 0; j <= 2; j++)
                {
                    cout << arr[i][j] << " ";
                }
            cout << endl;
        

        }

    
        else
        {
             for (int j = 2; j >=0; j--)
                {
                    cout << arr[i][j] << " ";
                }
            cout << endl;
        }


        }
        
}
int main()
{
    array();
    return 0;

    // 7 8 9
    // 6 5 4
    // 3 2 1
}