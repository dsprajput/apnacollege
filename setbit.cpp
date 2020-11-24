//set bit is used to set the position of bit as one
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position where you want to set the bit: ";
    cin>>p;
    int s = n|(1<<p);
    cout<<s<<endl;
    return 0;
}
