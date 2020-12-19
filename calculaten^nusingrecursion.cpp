#include<bits/stdc++.h>
using namespace std;

int raisep(int n, int p)
{
    if(p==0)
        return 1;
    int ppow = raisep(n, p-1);
    return n * ppow;
}

int main()
{
    int n, p;
    cin>>n>>p;
    cout<<raisep(n, p)<<endl;
    return 0;
}
