//Dutch national flag algorith is used to sort array with 0s,1s and 2s;
//Take 3 pointers and make sure to place numbers to their appropriate places
//0->(0,l-1),1->(l,m-1),2->(h+1,n-1)
//Check the position of mid
// #include<iostream>
// #include<vector>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;
vector<int>DNF(vector<int>&nums)
{
    int n=nums.size();
    int l=0,m=0,h=n-1;             //TC->O(m+n),SC->O(1)
    while(m<=h)
    {
        if(nums[m]==0)
        {
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1)
        {
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
    return nums;
}
    int main()
    {
        vector<int>nums={2,0,2,1,1,0,1,2,0,0};
         vector<int>res=DNF(nums);
         for(int x:res)
         {
            cout<<x<<" ";
         }
         return 0;
    }
