#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='(' && s[s.length()-1]==')' && s.length()%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]==')' || s[s.length()-1]=='(')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
