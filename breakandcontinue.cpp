#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    for(int i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            continue;     //continue statement stop the remaining statements of the loop and start the loop from next iteration
        }
        else
            cout<<i<<" ";
    }
    return 0;
}
