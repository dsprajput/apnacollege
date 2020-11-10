#include<iostream>
using namespace std;

int fac(int num)
{
    int fac=1;
    for(int i=1; i<=num; i++)
    {
        fac = fac*i;
    }
    return fac;
}

int main()
{
    int n, r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int q = n-r;
    int nf = fac(n);
    int rf = fac(r);
    int nrf = fac(q);
    int nCr = nf/(rf*nrf);
    cout<<nCr;
    return 0;
}
