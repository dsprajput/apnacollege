#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int p, int i)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i]==p)
    {
        return i;
    }
    else
    {
        firstocc(arr, n, p, i+1);
    }
}

int lastocc(int arr[], int n, int p, int i)
{
    if(i==n)
    {
        return -1;
    }
    int restarray = lastocc(arr, n, p, i+1);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==p)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1, 2, 3, 7, 2, 9};
    int p;
    cin>>p;
    int i=0;
    cout<<firstocc(arr, 6, p, i)<<endl;
    cout<<lastocc(arr, 6, p, i)<<endl;
    return 0;
}
