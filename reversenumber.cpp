#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    while(a>0)
    {
        int ld=a%10;
        a = a/10;
        cout<<ld;
    }
    cout<<endl;
    return 0;
}
