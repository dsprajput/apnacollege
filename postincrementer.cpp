#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b;
    b = a++;      // In this expression a will first assigned to b and then its value will got incremented so in this example a becomes 11 and b remain 10
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}
