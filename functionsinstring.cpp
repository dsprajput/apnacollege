#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1="Nincompoop";     //nincompoop means fool or idiot
    string s =s1.substr(6, 4);     //substring of the string
    cout<<s<<endl;
    cout<<s1.size()<<endl;   //gives the size of the string

    for(int i=0; i<s1.length(); i++)
    {
        cout<<s1[i]<<endl;
    }
    cout<<s1[1]<<endl;
    s1.erase(3, 3);             //erases the elements and shifts the next one
    cout<<s1.find("oo")<<endl;    //returns the index at which it finds the value

    s1.insert(2, "lol");    //insert the strng at the given index.
    cout<<s1<<endl;
    s1.clear();  //clears the string
    cout<<s1<<endl;
    string s2="xyz";
    string s3="cba";
    cout<<s2.compare(s3)<<endl;   //comparing s2 with s1
    if(s1.empty())
    {
        cout<<"String 1 is Empty. "<<endl;
    }
    string s4 = "786";
    int x = stoi(s4);      //converts string to integer
    cout<<x+2<<endl;

    string s5 = to_string(x);  //converts integer to string
    cout<<s5+"2"<<endl;

    string s6 = "kdthgskeisokelw";

    sort(s6.begin(), s6.end());
    cout<<s6<<endl;

    return 0;
}
