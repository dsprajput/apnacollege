//In Kadane's algorithm we will iterate over the loop and store the sum of a subarray in crsum. If crsum is negative, we will make it zero.
//If crsum is greater than maxsu we will make maxsu equals crsum and return the maximum sum of the subarray.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int crsum=0;
    int maxsu=INT_MIN;
    for(int i=0; i<n; i++)
    {
        crsum+=arr[i];
        if(crsum<0)
        {
            crsum=0;
        }
        else if(crsum>maxsu)
        {
            maxsu=crsum;
        }
    }
    cout<<maxsu<<endl;
    return 0;
}
