#include<iostream>
using namespace std;
string Def(string address)
{
    int i=0;
    string ans;
    while(i<address.size())
    {
        if(address[i]=='.')
        {
            ans+="[.]";
        }
        else{
            ans+=address[i];
        }
        i++;
    }
    return ans;
}
int main()
{
    string address;
    cout<<"Enter the address"<<endl;
    getline(cin,address);
    string res=Def(address);
    cout<<res;

    return 0;

}