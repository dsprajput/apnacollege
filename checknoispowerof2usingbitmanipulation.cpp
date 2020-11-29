//the logic behind it is that the 'AND' operation between the power of 2 and one less than it will always give zero.
#include<bits/stdc++.h>
using namespace std;

bool ispower(int n)
{
    return (n &&!(n&(n-1)));   //here 'and' operation is done again to include the case of 0
}

int  main()
{
    int n;
    cin>>n;
    cout<<"It is "<<ispower(n);
    return 0;
}
