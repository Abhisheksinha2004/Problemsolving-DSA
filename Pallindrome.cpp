#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int str=0,end=s.size()-1;
    while(str<=end)
    {
        if(s[str]!=s[end]){
        cout<<"Not a Palindrome";
        return 0;
        }
        str++;
        end--;
      
    }
    cout<<"Palindrome";
    return 0;

}