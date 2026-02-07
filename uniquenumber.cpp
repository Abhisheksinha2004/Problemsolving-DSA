#include<iostream>
#include<vector>
using namespace std;
int a=0;
int unique(vector<int>&vec)
{
    
    for( int val:vec)
    {
        a=a^val;
    }
    return a;
}
int main()
{
 vector<int>vec={1,1,2,2,4,4,8,8,9};
unique(vec);
cout<<a<<endl ;
return 0;

}
