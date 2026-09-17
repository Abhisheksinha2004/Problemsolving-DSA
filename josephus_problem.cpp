#include<iostream>
#include<vector>
using namespace std;
int findWinner(int n,int k)
{
    vector<int>arr;
    for(int i=0;i<=n;i++)
    {
        arr.push_back(i);
    }
    int i=0;
    while(arr.size()>1)
    {
        int idx=(i-k+1)%arr.size();//time complexity O(n2)
        arr.erase(arr.begin()+idx);
        i=idx;
    }
    return arr[0];
}
int main()
{
    cout<<findWinner(8,3);
}