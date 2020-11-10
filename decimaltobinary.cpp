#include<iostream>
using namespace std;

int dectobin(int n)
{
    int x=1;
    int ans =0;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int ld = n/x;
        n -= ld*x;
        x/=2;
        ans = ans*10+ld;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int p = dectobin(n);
    cout<<"The value in binary is "<<p;
    return 0;
}
