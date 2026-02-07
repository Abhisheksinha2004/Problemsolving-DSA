#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>&nums,int key)
{
    int l=0,h=nums.size()-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(nums[mid]<key)
        {
            l=mid+1;
        }
        else if(nums[mid]>key)
        {
            h=mid-1;
        }
        else{
            cout<<"Key is found at index "<<mid<<endl;
            break;
        }
    }
    if(l==h)
    {
        cout<<"key is  not found"<<endl;
    }

}
int main()
{
    vector<int>nums={12,34,45,46,48};
    int key=45;
    BinarySearch(nums,key);
    return 0;
}