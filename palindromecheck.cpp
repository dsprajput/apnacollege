// A word is said to be palindrome if remains the same if its letters are reversed. E.g- NITIN.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int i;
    bool check=1;
    for(i=0; i<n; i++)
    {
        if(a[i]!=a[n-i-1])
        {
            check=0;
            cout<<"Not Palindrome";
            break;
        }
    }
    if(check=1)
    {
        cout<<"It is Plandrome.";
    }
    return 0;
}

