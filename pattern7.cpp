#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4+i; j++)
        {
            if(i+j>=3)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=4; i>0; i--)
    {
        for(int j=0; j<=2+i; j++)
        {
            if(i+j<4)
            {
                cout<<" ";
            }
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
