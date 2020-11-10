#include<iostream>
using namespace std;

int octodec(int n)
{
    int x=1;
    int ans=0;
    while(n>0)
    {
        int ld=n%10;
        ans+=ld*x;
        n=n/10;
        x*=8;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a octal number: ";
    cin>>n;
    int p = octodec(n);
    cout<<"The value in decimal is "<<p<<endl;

    return 0;

}
