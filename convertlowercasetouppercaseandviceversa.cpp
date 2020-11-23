#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "AbjlksTHisjs";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a'  && s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A'  && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::toupper);   //inbuilt function for converting it into upper case
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);   //inbuilt function for converting it into lowercase
    cout<<s<<endl;
    return 0;
}
