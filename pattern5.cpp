#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5+i; j++)
        {
            if((i+j)%2==0 && (i+j)>=4)
            {
                cout<<((i+j)/2)-1;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
