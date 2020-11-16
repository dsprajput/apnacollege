#include<iostream>
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
    int p;
    cin>>p;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            if(sum==p)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    cout<<endl;
    return 0;
}
