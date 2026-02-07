#include<iostream>
using namespace std;
int main(){
    string str="Problem solving";
    cout<<str<<endl;
    string s1="c++ ";
    string s2="DSA";
    string s3=s1+s2;
    cout<<s3<<endl;
    string s4="DSA";
    cout<<(s2==s4)<<endl;
    getline(cin,str);
    cout<<"output: "<<str<<endl;
    return 0;

}