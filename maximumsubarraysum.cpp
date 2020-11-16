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
    int crsum=INT_MIN;
    int sum;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            if(sum>crsum)
            {
                crsum=sum;
            }
        }
    }
    cout<<crsum<<endl;
    return 0;
}
