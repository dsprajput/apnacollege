#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(j>i && i+j<7)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    for(int i=3; i>=0; i--)
    {
        for(int j=0; j<8; j++)
        {
            if(j>i && i+j<7)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
}
