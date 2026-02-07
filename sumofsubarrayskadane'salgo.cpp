#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int sumofSubarrays(vector<int>&vec)
{
    int current=0;
    int maxsum=INT_MIN;   //kadan's algorithm
    for(int val:vec)
    {
        current+=val;
        maxsum=max(current,maxsum);
    }
    return maxsum;
}
int main()
{
    vector<int>vec={1,-3,3,-34,2,4,42};
   cout<<sumofSubarrays(vec)<<endl;
    
    return 0;
}