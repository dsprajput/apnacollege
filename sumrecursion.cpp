#include<bits/stdc++.h>
using namespace std;

int recursivesum(int n)
{
    if(n==0)
        return 0;
    int prevsum = recursivesum(n-1);
    return n+ prevsum;
}

int main()
{
    int n;
    cin>>n;
    cout<<recursivesum(n)<<endl;
    return 0;
}
