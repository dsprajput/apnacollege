#include<bits/stdc++.h>
using namespace std;

int kadane(int n, int arr[])
{
    int crsum=0;
    int maxsu=INT_MIN;
    for(int i=0; i<n; i++)
    {
        crsum+=arr[i];
        if(crsum<0)
        {
            crsum=0;
        }
        maxsu=max(crsum, maxsu);
    }
    return maxsu;
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
    int nonwrap = kadane(n, arr);
    int wrap;
    int total=0;
    for(int i=0; i<n; i++)
    {
        total+=arr[i];
        arr[i]*=-1;
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
        maxsu=max(crsum, maxsu);
    }
    maxsu*=-1;
    wrap=total-maxsu;
    cout<<max(wrap, nonwrap);
    return 0;
}
