#include<iostream>
#include<vector>
using namespace std;
int SingleElementSortedArray(vector<int>&A)
{
    int n=A.size();
    int str=0,end=n-1;
    if(n==1) return A[0];
    while(str<=end)
    {
        int mid=str+(end-str)/2;
        if(A[mid-1]!=A[mid]&&A[mid]!=A[mid+1])
        {
            return A[mid];
        }
        if(mid==0&&A[0]!=A[1])
        {
            return A[mid];
        }
        if(mid==n-1&&A[n-1]==A[n-2])
        {
            return A[mid];
        }
        if(mid%2==0)
        {
            if(A[mid-1]==A[mid])
            {
                end=mid-1;
            }
            else{
                str=mid+1;
            }
        }
        else{
            if(A[mid-1]==A[mid])
            {
                str=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}
int main()
{
    vector<int>A={1,1,2,3,3,4,4,8,8};
    int idx=SingleElementSortedArray(A);
    cout<<"The single element in the sorted array is "<<idx<<endl;
    return 0;
}