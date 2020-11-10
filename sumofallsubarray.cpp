#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Type all  these elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    cout<<"The sum of all these subarray equals: ";
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    cout<<endl;
    return 0;
}
