#include<iostream>
#include<vector>
using namespace std;
// int pairSum(vector<int>&num,int target,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(num[i]+num[j]==target)
//             {
//                 cout<<num[i]<<","<<num[j]<<endl;
//             }
//         }
//     }
// }
// int main()
// {
//     vector<int>num={2,7,5,3,8,4};
//     pairSum(num,9,6);
//     return 0;
// }

//two pointer's apporoach
int pairSum(vector<int>num,int target,int n)
{
    int i=0,j=n-1;
    
    while(i<j)
    {
        int ps=num[i]+num[j];
        if(ps<target)
        {
            i++;
        }
        else if(ps>target)
        {
            j--;
        }
        else{
            cout<<num[i]<<","<<num[j]<<endl;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int>num={2,3,5,6,8,9};
    pairSum(num,9,6);
    return 0;
}
