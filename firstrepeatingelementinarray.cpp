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
    int minin=INT_MAX;
    int a[n]={-1*n};
    for(int i=0; i<n; i++)
    {
        a[arr[i]]=i+1;
        if(a[arr[i]!=-1] && i+1<minin)
        {
            minin=i+1;

        }
    }
    cout<<minin<<endl;
    return 0;
}
