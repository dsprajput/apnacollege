// the chracter array has size one more than the normal array to add null chracter. Null chracter is added so that the compiler gets to know about
// where our code array ends.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100]= "apple";
    char a[100];
    cin>>a;           //taking input in character array.
    cout<<a<<endl;
    int i=0;
    while(arr[i]!= '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
}
