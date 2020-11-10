#include<iostream>
#include<cmath>
using namespace std;

int dec(int n)
{
    int b = n;
    int i=0;
    int dec=0;
    while(n>0)
    {
        int ld=n%10;
        n = n/10;
        i++;
    }
    for(int j=0; j<i, b>0; j++)
    {
        int ld;
        ld=b%2;
        b=b/10;
        dec+=pow(2, j) * ld;
    }
    return dec;
}

int main()
{
    int n;
    cout<<"Enter a number in binary: ";
    cin>>n;
    int p = dec(n);
    cout<<"The value in decimal is "<<p<<endl;
    return 0;
}
