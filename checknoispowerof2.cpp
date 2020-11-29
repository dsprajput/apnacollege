#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin>>n;
    while(n>1)
    {
        n/=2;
    }
    if(n==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
