#include<bits/stdc++.h>
using namespace std;

void printnum(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    printnum(n-1);
}

int main()
{
    int n;
    cin>>n;
    printnum(n);
    return 0;
}
