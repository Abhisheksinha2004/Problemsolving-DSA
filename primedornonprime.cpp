#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number= "<<endl;
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not prime"<<endl;
            break;
        }
       
    }
  if(i==n)
  {
    cout<<"Number is prime\n";
  }  
   
return 0;
}