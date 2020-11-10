#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    char op, ch;
    do{

    cout<<"Enter two number: ";
    cin>>n1>>n2;

    cout<<"Enter the operator for the operation you want to perform: ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Enter correct binary operator";
            break;

    }
    cout<<"\nDo Again(y/n)? ";
    cin>>ch;
    }while(ch!='n');
    return 0;
}
