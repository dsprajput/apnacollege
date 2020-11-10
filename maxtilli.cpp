#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the objects the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, arr[i]);
        cout<<maxi<<" ";
    }
    cout<<endl;
    return 0;
}
