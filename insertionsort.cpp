#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the total no of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Type these elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
