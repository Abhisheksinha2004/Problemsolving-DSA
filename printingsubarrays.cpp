#include<iostream>
#include<vector>
using namespace std;
int subarrays(vector<int>&nums,int n)
{
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    
}
int main()
{
    
    vector<int>nums={1,2,3,4,5,4};
    subarrays(nums,6);
    return 0;
}