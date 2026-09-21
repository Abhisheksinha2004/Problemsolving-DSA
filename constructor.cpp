#include<iostream>
using namespace std;
class Customer
{
    string name;
    int account_number;
    int balance;
    public:
    //Default constructor
    Customer()
    {
        name="Abhsihek";
        account_number=34;
        balance=100;

    }
    //parametric constructor
    Customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }


};
int main()
{
    Customer A1;
    Customer A2("Abhishek",23,1000);
    A1.display();
    A2.display();

}