#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ReverseString(vector<char>& s)
{
    int st=0,e=s.size()-1;
    while(st<=e)
    {
        swap(s[st],s[e]);
        st++;
        e--;
    }
}
int main()
{
    vector<char> s={'A','B','H','I','S','H','E','K'};
    ReverseString(s);
    for(char c:s)
    {
        cout<<c<<" ";
    }
    return 0;

}
