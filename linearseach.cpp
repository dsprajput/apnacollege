//linear search has the time complexity of O(N)
#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key==arr[i])
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key you want to find: ";
    cin>>key;
    int p = linearsearch(arr, n, key);
    cout<<"The position of key after linear search is "<<p<<endl;
    return 0;
}

