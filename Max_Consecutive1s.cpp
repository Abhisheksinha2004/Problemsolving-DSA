 #include<iostream>
 #include<vector>
 using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int m=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        { if(nums[i]==1){
            int a=nums[i];
            int count=1;
            while(i<n-1&&nums[i]==nums[i+1])
            {
                count++;
                i++;
            }
            m=max(m,count);
        }
        }
        return m;
        
    }
    int main()
    {
        vector<int>nums={0,1,0,1,1,1};
        cout<<findMaxConsecutiveOnes(nums);
    }