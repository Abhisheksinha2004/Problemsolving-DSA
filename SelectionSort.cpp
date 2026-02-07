#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> SelectionSort(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
    {
        int smallestidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[smallestidx])
            {
                smallestidx=j;
            }
        }
        swap(a[i],a[smallestidx]);
    }
    return a;

}
int main()
{
    vector<int>a={4,1,5,2,3};
    int n=5;
    vector<int>ans=SelectionSort(a,n);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
