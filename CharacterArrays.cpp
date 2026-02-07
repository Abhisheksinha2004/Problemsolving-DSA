#include<iostream>
using namespace std;
int main()
{
    // char str[100];
    // cout<<"Enter the char array : ";
    // cin.getline(str,100);

    // cout<<"output : "<<str<<endl;
    // return 0;
       char str[19];
    cout<<"Enter the char array : ";
    cin.getline(str,19);

    for(char ch:str){
        cout<<ch<<" ";
    }

    cout<<"output : "<<str<<endl;
    return 0;
}
