//Sum of Element in Row & column in 2-D array//

#include<iostream>
using namespace std;
 
int main()
{
    int row , cols ,sumrow=0,sumcols=0 , index;
    int arr[20][20];

    cout<<"Enter thr Array's row size :";
    cin>>row;
    cout<<"Enter thr Array's column size :";
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

    cout<<"Element row number :";
    cin>>index;
    cout<<"Enter of row"<<index<<": ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(i==index)
            {
                cout<<arr[i][j]<<", ";
                sumrow+=arr[i][j];
            }
        }
    }
    cout<<endl<<"The Sum Of Row :"<<index<<": "<<sumrow<<endl;

    cout<<"Element cloumn number :";
    cin>>index;
    cout<<"Enter of cloumn"<<index<<": ";

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(j==index)
            {
                cout<<arr[i][j]<<", ";
                sumcols+=arr[i][j];
            }
        }
    }
    cout<<endl<<"The Sum Of cloumn :"<<index<<": "<<sumcols<<endl;


    return 0;
}