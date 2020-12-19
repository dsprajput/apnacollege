#include<bits/stdc++.h>
using namespace std;

void printnum(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
    }
    else
    {
        printnum(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    printnum(n);
    return 0;
}
