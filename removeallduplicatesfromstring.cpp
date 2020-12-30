#include<bits/stdc++.h>
using namespace std;

string removeduplicate(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeduplicate(s.substr(1));

    if(ch == ans[0])
    {
        return ans;
    }
    else
    {
        return (ch+ans);
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<removeduplicate(s)<<endl;
    return 0;
}
