#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> InsertionSort(vector<int>&a)
{
    int n=a.size();
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    return a;
}
int main(){
    vector<int>a={5,4,10,1,6,2};
    vector<int>res=InsertionSort(a);
    for(int x:res)
    {
        cout<<x<<" ";
    }
    return 0;
    
}