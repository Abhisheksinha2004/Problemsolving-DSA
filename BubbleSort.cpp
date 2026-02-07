#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> BubbleSort(vector<int>&a,int n)
{
    for(int i=0;i<=n-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
          swap(a[j],a[j+1]);
          isSwap=true;
            }
        }
        if(!isSwap)
        {
            return a;
        }

    }
    return a;

}
int main()
{
    vector<int>a={4,1,5,2,3};
    int n=5;
    vector<int>ans=BubbleSort(a,n);
    for(int i:ans)
    {
        cout<<i<<" ";

    }
    return 0;
}