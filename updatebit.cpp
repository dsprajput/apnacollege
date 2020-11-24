#include<bits/stdc++.h>
using namespace std;

int updatebit(int n, int pos,int i)
{
    int mask = ~(1<<pos);
    int clearbi= n&mask;
    int ans;
    ans=(i<<pos)|clearbi;
    return ans;
}

int main()
{
    int n, p, i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position at which you want to update bit: ";
    cin>>p;
    cout<<"Enter the bit to which you want to update it: ";
    cin>>i;
    cout<<updatebit(n, p, i);
    return 0;
}
