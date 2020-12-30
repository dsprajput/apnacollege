#include<bits/stdc++.h>
using namespace std;

int possiblepath(int sp, int ep)
{
    if(sp==ep)
    {
        return ans;
    }
    sp += 1;
    int ans += possiblepath(sp, ep);
}

int main()
{
    cout<<possiblepath(0, 3)<<endl;
    return 0;
}
