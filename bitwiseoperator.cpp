//bitwise operators perform operations on the bit of a number.
#include<iostream>
using namespace std;

int main()
{
    int a = 45, b = 32;
    // 45 =  00101101          // 32 = 00100000
    int c = a & b; //perform 'AND' operation on the bits of these numbers so it wil give 00100000
    int d = a | b; //perform 'OR' operation on the bits of these numbers so it will give 00101101
    int e = a ^ b; //perform 'XOR' operation on the bits of these numbers to give 00001101
    int f = ~a; //gives the nagation of every bit of a number i.e.,
    int g = ~b; //
    b  = 2;
    int h = a<<b;  //'<<' left shift operator, it will shift the bits of 'a' to the left by the number b; a<<b is also equal to a*2^b.
    int j = a>>b; //'>>' right shift operator, it will shift the bits of 'a' to the right by the number b; a>>b is also equal to a/2^b.
    cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<j<<endl;
    return 0;
}
