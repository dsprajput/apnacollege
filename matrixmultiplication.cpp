#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout<<"Enter the dimensions of the matrix: ";
    cin>>n1>>n2>>n3;
    int a[n1][n2];
    int b[n2][n3];
    cout<<"Enter the first matrix: \n";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix: \n";
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cin>>b[i][j];
        }
    }
    int arr[n1][n3];
    cout <<"The resultant matrix after multiplication: \n";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            arr[i][j]=0;
            for(int k=0; k<n2; k++)
            {

                arr[i][j]+=a[i][k]*b[k][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
