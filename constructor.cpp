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
    // Customer(string a,int b,int c)
    // {
    //     name=a;
    //     account_number=b;
    //     balance=c;
    // }
    //inline constructor

   inline Customer(string a,int b,int c):name(a),account_number(b),balance(c){

    }
    //Copy constructor
    Customer(Customer &B)
    {
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;

    };
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
    Customer A3(A2);
    A3.display();
    Customer A5;
    A5=A3;
    A5.display();

}