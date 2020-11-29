// the concept behind the solution is that the and of n and n-1 will have the same number of bits except the rightmost setbit.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n-1;
    int i=0;
    while(n!=0)
    {
        n=n&p;
        p=n-1;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
