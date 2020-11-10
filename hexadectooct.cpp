#include<bits/stdc++.h>
using namespace std;

int hexatodec(string n)
{
    int ans=0;
    int s = n.size();       //the stl function to give the size of array.
    int x = 1;
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int main()
{
    string n;
    cout<<"Enter the hexadecimal number: ";
    cin>>n;
    int p = hexatodec(n);
    cout<<"The value in decimal is "<<p<<endl;
    return 0;
}
