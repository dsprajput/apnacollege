//to clear the bit of a particular position
#include<bits/stdc++.h>
using namespace std;

int clearbit(int n, int pos)
{
    return ((~(1<<pos))&n);
}

int main()
{
    int n, p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position of which you want to clear bit: ";
    cin>>p;
    cout<<clearbit(n, p);
    return 0;
}
