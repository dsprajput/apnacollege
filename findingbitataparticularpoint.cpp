//get bit is used to get the bit at the position we want to find
#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return (n&(1<<pos)!=0);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position at which you want to find bit: ";
    int p;
    cin>>p;
    int x=getbit(n, p);
    cout<<x<<endl;
    return 0;
}
