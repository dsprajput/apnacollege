#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    int maxi=0;
    for(int i=0; i<n; i++)
    {
        maxi=max(arr[i], maxi);
        if(arr[i]>arr[i+1] && arr[i]>=maxi)
            ans++;
    }
    cout<<"The number of days for which records breaks equals ";
    cout<<ans<<endl;
    return 0;
}
