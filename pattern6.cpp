#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5+i; j++)
        {
            if(i+j>=4 && j==4)
                cout<<"1";
            if(i+j>=4 && (j==3 || j==5))
                cout<<"2";
            if(i+j>=4 && (j==2 || j==6))
                cout<<"3";
            if(i+j>=4 && (j==7 || j==1))
                cout<<"4";
            if(i+j>=4 && (j==0 || j==8))
                cout<<"5";
            else if(i+j<4)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
