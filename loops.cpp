#include<iostream>
using namespace std;
int main(){
int n,sum;
sum=0;
cout<<"Enter the number\n";
cin>>n;
for(int i=1;i<=n;i++)
{
sum+=i;
}
cout<<"The sum of numbers is\n"<<sum<<endl;
return 0;
}