//to print all the prime numbers between two digits
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter two numbers between which you wanna print prime: ";
    cin>>a>>b;
    for(int i = a+1; i<b; i++)
    {
        int j;
        for(j=2; j<sqrt(i); j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
        cout<<i<<" ";
    }
    return 0;
}
