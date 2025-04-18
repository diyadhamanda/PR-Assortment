//Transpose of 2-Array//

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[20][20];

    cout<<"Enter number for row & column  size :";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<"Enter element for a["<<i<<"]["<<j<<"]:";
           cin>>a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;

}