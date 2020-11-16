#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter all the number of rows: ";
    cin>>n;
    cout<<"Type all the elements of the arrays: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The respective subarrays of this array are: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
