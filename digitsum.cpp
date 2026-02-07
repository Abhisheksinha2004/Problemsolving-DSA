#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int digitsum=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        digitsum+=lastdigit;
    }
    return digitsum;
}
int main()
{
    cout<<sumOfDigits(34545);
    return 0;
}