#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Type these elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mini;
    int temp;
    for(int i=0; i<n-1; i++)
    {
        mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[mini])
                mini=j;
        }
        temp=arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    cout<<"The sorted array is ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
