#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age,roll_number;
    string grade;
};
int main()
{
    Student S1;
    S1.name="Abhishek Sinha";
    S1.age=21;
    S1.roll_number=2;
    S1.grade="A+";

    cout<<S1.age<<" ";
    cout<<endl;
    Student S2;
    S2.name="Rahul";
    S2.age=22;
    S2.roll_number=3;
    S2.grade="A";
    cout<<S2.name<<" ";

}