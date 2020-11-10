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

int nCr(int n, int r)
{
    int nCr = fac(n)/(fac(n-r)*fac(r));
    return nCr;
}

int main()
{
    for(int i =0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            int p=nCr(i, j);
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}
