//pointers are variable that stores the address of a variable
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int *aptr=&a;
    cout<<&a<<endl;  //gives the address of the a
    cout<<aptr<<endl;  //gives the value store in aptr which is the address of the a
    cout<<*aptr<<endl;  //gives the value of the variable to which aptr  is pointing, this process is called derefrencing.
    return 0;
}
