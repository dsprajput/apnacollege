#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int *p = &a;
    int **q = &p;
    cout<<p<<endl;   // returns the address of a
    cout<<q<<endl;    // returns the address of p
    cout<<*p<<endl;   //prints the value of a
    cout<<**q<<endl; //prints the value of a
    cout<<*q<<endl;   // prints the value of p
    return 0;
}
