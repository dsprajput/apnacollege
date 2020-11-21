#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number of rows and column of the matrix:";
    cin>>n>>m;
    int val;
    cout<<"Type the element you want to search: ";
    cin>>val;
    cout<<"Type the elements of the matrix: ";
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int p=n-1;
    int q=0;
    while(q<m && p>=0)
    {
        if(arr[p][q] == val)
        {
            cout<<"It is found at "<<p<<", "<<q<<endl;
            break;
        }
        else if(arr[p][q]>val)
        {
            p--;
        }
        else if(arr[p][q]<val)
        {
            q++;
        }
    }
    if(p<0 || q>m)
    {
        cout<<"It does not exist in the array.";
    }
    return 0;
}
