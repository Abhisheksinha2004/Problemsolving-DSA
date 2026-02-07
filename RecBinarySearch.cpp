#include<iostream>
#include<vector>
using namespace std;
int RecBinarySearch(vector<int>&nums,int key,int str,int end)
{
    if(str<=end)
    {
        int mid=str+(end-str)/2;
        if(nums[mid]<key)
        {
            return RecBinarySearch(nums,key,mid+1,end);
        }
        else if(nums[mid]>key)
        {
            return RecBinarySearch(nums,key,str,mid-1);
        }
        else{
            return mid; 
        }
        
    }
    if(str>end)
        {
            return -1;
        }

}
int main()
{
    vector<int>nums={12,14,23,35,36,37,45};
    int key=45;
    int str=0;
    int n=nums.size();
    int end=n-1;
    int index=RecBinarySearch(nums,key,str,end);
    if(index!=-1)
    {
        cout<<"key is found at index "<<index<<endl;

    }
    else{
        cout<<"key is not found"<<endl;
    }
    return 0;
}