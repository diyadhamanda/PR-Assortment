//Largest Element in 2D Array//

#include<iostream>
using namespace std;

int main()
{
    int max,row,cols;
    int arr[20][20];

    cout<<"Enter Array's row size:";
    cin>>row;
    cout<<"Enter Array's col size:";
    cin>>cols;

    cout<<"Enter the array's element:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>arr[i][j];
        }
    }
    max=arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"The Largest Element is :"<<max;
    return 0;

}