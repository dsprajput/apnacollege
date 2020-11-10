//armstrong no. is the one whose sum of cubes of individual digits equals the same number.
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int ld;
    int p=0;
    cout<<"Enter a number: ";
    cin>>a;
    b=a;
    while(b>0)
    {
        ld = b%10;
        p = p+ld*ld*ld;
        b = b/10;
    }
    if(a==p)
        cout<<"It's an armstrong number. ";
    else
        cout<<"It is not a armstrong number. ";
    return 0;
}
