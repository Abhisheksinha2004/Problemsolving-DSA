#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter the character"<<endl;
cin>>ch;
if(ch>=65&&ch>=90)
{
    cout<<"lowercase character\n";
}
else{
    cout<<"Uppercase character\n";
}
return 0;
}