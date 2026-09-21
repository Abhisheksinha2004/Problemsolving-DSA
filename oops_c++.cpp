#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age,roll_number;
    string grade;
    //Function Getter and Setter
    public:
    void setname(string s)
    {
        name=s;
    }
    void setage(int x)
    {
        age=x;
    }
    void setroll_number(int a)
    {
        roll_number=a;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    int getroll_number()
    {
        return roll_number;
    }
};
int main()
{
    Student S1;
    S1.setname("Abhishek");
    S1.setage(21);
    S1.getname();
    S1.getage();
    S1.setroll_number(2);
    cout<<S1.getroll_number();
    

   

   
    Student S2;
   
}