#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    int arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i]=0;
    }
    for(int i=0; i<s.size(); i++)
    {
        arr[(s[i]-'a')]+=1;
    }
    int maxi=arr[0];
    int p=0;
    int x=97;
    for(int i=0; i<26; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            if(i>p)
            {
                p=i;
            }
        }
    }
    cout<<"Maximum number of time a number repeats equals ";
    cout<<maxi<<endl;
    //cout<<p<<endl;
    char ch=x+p;
    cout<<"The number which is repeating is ";
    cout<<ch<<endl;
    return 0;
}
