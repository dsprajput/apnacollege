#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]= {5, 3, 2, 4, 1};
    int mini= INT_MAX;     // INT_MAX is the maximum integer in cpp
    int maxi= INT_MIN;       //INT_MIN is the minimum integer in cpp
    for(int i=0; i<5; i++)
    {
        if(arr[i]<mini)
            mini = arr[i];
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    cout<<"Maximum term is "<<maxi<<endl;
    cout<<"Minimum term is "<<mini<<endl;
    return 0;
}
