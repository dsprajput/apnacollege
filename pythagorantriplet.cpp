#include<iostream>
#include<cmath>
using namespace std;

bool pythgorant(int a, int b, int c)
{
    int x, y, z;
    if(a>b)
    {
        if(a>c)
            x=a;
        else
            x=c;
    }
    else if(b>a)
    {
        if(b>c)
            x=b;
        else
            x=c;
    }


    if(x==a)
    {
        y=b;
        z=c;
    }
    else if(x==b)
    {
        y=a;
        z=c;
    }
    else if(x==c)
    {
        y=b;
        z=a;
    }

    if(pow(x, 2) == pow(y, 2) + pow(z, 2))
        return true;
    else
        return false;
}

int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(pythgorant(a, b, c))
    {
        cout<<"Pythagoran triplet"<<endl;
    }
    else
    {
        cout<<"Not pythagorean triplet"<<endl;
    }
    return 0;
}
