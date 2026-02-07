#include<iostream>
using namespace std;
int fact(int n)
{
    
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;

    }
    return fact;
}
int main()
{
    int x;
    cout<<"x= "<<endl;
    cin>>x;
    cout<<"factorial of a given number is \n";
    cout<<fact(x)<<endl;
}