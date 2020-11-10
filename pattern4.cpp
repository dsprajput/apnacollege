#include<iostream>
using namespace std;

int main()
{
    for(int i =0; i<5; i++)
    {
        for(int j=0; j<13; j++)
        {
            if((i+j)>=4 && (i+j)<=12 && (i+j)%2==0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

}
