#include<iostream>
using namespace std;
void reverseArray(int a[],int size)
{
    int s=0,e=size-1;
    while(s<e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=5;
    reverseArray(a,5);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}