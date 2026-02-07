#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int majorityElement(vector<int>&num,int n)
// {
//     for(int val:num)
//     {
//         int freq=0;
//         for(int el:num)
//         {
//             if(val==el)
//             {
//                 freq++;                //O(n2)
//             }
//         }
    
//     if(freq>n/2)
//     {
//         return val;
//     }
// }
// }
// int main()
// {
//     vector<int>num={1,2,2,1,2};
//     cout<<majorityElement(num,5)<<endl;
//     return 0;
// }

//optimised apporoach
// int majorityElements(vector<int>&num,int n)
// {
//     sort(num.begin(), num.end());
//     int freq=1,ans=num[0];
//     for(int i=1;i<n;i++)
//     {
//         if(num[i]==num[i-1])            //O(nlogn)
//         {
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=num[i];
//         }
//         if(freq>n/2)
//         {
//             return ans;
//         }
//     }
// }
// int main()
// {
//     vector<int>num={1,6,6,4,6,6,6,7,7,3,6,6};
//     cout<<majorityElements(num,12)<<endl;
//     return 0;
// }
//Moore's algorithm
int majorityElement(vector<int>&num,int n)
{
    int freq=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=num[i];
        }
        else if(ans==num[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;  
     
}
int main()
{
    vector<int>num={1,6,6,4,6,6,6,7,7,3,6,6};
    cout<<majorityElement(num,12)<<endl;
    return 0;
}