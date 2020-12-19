#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int j=0, k=n-1; j<n/2, k>=n/2; k--, ++j)
        {
            if(n%2==1)
            {
            if(j!=n/2)
                cout<<a[j]<<" "<<a[k]<<" ";
            else if(j==n/2)
                cout<<a[j];
            }
            else
                cout<<a[j]<<" "<<a[k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
