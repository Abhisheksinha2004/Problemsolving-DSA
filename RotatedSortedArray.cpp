#include<iostream>
#include<vector>
using namespace std;
int RotatedSortedArray(vector<int>&a,int tar)
{
    int str=0,end=a.size()-1;
    while(str<=end)
    {
        int mid=str+(end-str)/2;
        if(a[mid]==tar)
        {
            return mid;
        }
        if(a[str]<=a[mid]) //left part is sorted
        {
            if(a[str]<=tar&&tar<=a[mid])
            {
                end=mid-1;
            }
            else{
                str=mid+1;
            }

        }
        else{
            if(a[mid]<=tar&&tar<=a[end])
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
    vector<int>a={3,4,5,6,7,0,1,2};
    int tar=5;
    int idx=RotatedSortedArray(a,tar);

    cout<<"Element is found at index "<<idx<<endl;
    return 0;
}