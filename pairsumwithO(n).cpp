// this work for sorted array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high = n-1;
    for(int i=0; i<n; i++)
    {
        if(arr[low]+arr[high]<k)
        {
            low++;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high;
            break;
        }
    }
    return 0;
}
