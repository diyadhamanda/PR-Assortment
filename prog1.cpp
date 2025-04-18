// Negative element in  array//

#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[20];

    cout<<"Enter a Array's size ";
    cin>>n;

    cout<<"Enter Array's Element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] :";
        cin>>arr[i];

    }
    cout<<"Negative Element from an Array:";

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            cout<<arr[i]<<", ";
        }
        
        
    }

    return 0;
}