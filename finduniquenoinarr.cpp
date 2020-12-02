//the logic behind this code is that we can find xor all the numbers and the xor of unique number gives the same number.
#include<bits/stdc++.h>
using namespace std;

int uniquenumber(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<uniquenumber(arr, n)<<endl;
    return 0;
}
