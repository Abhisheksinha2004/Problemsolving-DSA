#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<size<<endl;
    return 0;
}
