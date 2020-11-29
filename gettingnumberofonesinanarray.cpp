#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0; i<=num; i++)
    {
        int r=i;
        int p=0;
        while(r!=0)
        {
            r=r&(r-1);
            p++;
        }
        cout<<p<<" ";
    }
    return 0;
}
