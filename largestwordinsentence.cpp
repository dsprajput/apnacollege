#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currle=0;
    int ans=0;
    int st=0, maxst=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currle>ans)
            {
                ans=currle;
                maxst=st;
            }
            currle=0;
            st=i+1;
        }
        else
            currle++;
        if(arr[i]=='\0')
        {
            break;
        }
        i++;

    }
    cout<<ans<<endl;
    for(int i=0; i<maxst; i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}
