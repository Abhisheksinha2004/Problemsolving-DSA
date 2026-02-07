// #include<iostream>
// using namespace std;
// int main()
// {
//     // sum of n odd natural number
//     int n,i=1;
//     int sum =0;
//     cout<<"Enter the number till which the sum has to be calculated ="<<endl;
//     cin>>n;
//     while(i<=n)
//     {
//        sum+=i;
//        i=i+2;
//     }
//     cout<<"sum="<<sum<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number till which the sum has to be calculated= "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}