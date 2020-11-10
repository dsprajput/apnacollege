#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pd=0;
    int cd=0;
    int pans=2;
    int nans=2;
    for(int i=0; i<n; i++)
    {

        if(arr[i]-arr[i+1]==pd)
        {

            nans++;
        }
        else
        {
            cd=arr[i]-arr[i+1];
            pd=cd;
            if(nans>pans)
            {
                pans=nans;
            }
            nans=2;
        }
    }
    cout<<pans<<endl;
    return 0;
}
