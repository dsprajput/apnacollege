#include<iostream>
using namespace std;

int main()
{
    char button;
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"Hello ";
        break;
        case 'b':
        cout<<"Namaste";
        break;
        case 'c':
        cout<<"What a nice day. ";
        break;
        default:
        cout<<"I am still learning.";
        break;
    }
    return 0;
}
