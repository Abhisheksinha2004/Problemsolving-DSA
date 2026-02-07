#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>vec={1,32,3,4,32,3432};
    // for(int val:vec)
    // {
    //     cout<<val<<endl;
    // }
    // return 0;

vector<int>bl;
bl.push_back(45);
bl.push_back(23);
bl.push_back(2322);
bl.push_back(12);
cout<<"after push back size= "<<bl.size()<<endl;
bl.pop_back();//pops the last element
cout<<"after pop back size= "<<bl.size()<<endl;
cout<<bl.front()<<endl;//give the first element
cout<<bl.back()<<endl;//give the last element
cout<<bl.at(1);//another way of writing bl[1]
}