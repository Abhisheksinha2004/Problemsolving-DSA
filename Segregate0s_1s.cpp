#include<iostream>

using namespace std;
void segregate(int arr[],int n)
{
    int str=0,end=n-1;
    while(str<=end)
    {
        if(arr[str]==0)
        {
            str++;
        }
        else{
            if(arr[end]==0)
            {
                swap(arr[str],arr[end]);
                str++,end--;

            }
            else
            end--;
        }
    }
}
int main()
{
    int arr[]={0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    segregate(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}