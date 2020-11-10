#include<iostream>
using namespace std;

int sumn(int n)
{
    int sum =0;
    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number whose sum you want to find: ";
    cin>>n;
    int p = sumn(n);
    cout<<"The sum of first "<<n<<" natural numbers is "<<p<<endl;
    return 0;
}
