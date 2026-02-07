#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v1(5,1);

    // size and capacity
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    vector<int>a;
    a.push_back(2);
    a.push_back(12);
    a.push_back(21);
    a.push_back(121);
    cout<<a[0]<<endl;
    cout<<a.front()<<endl;
    cout<<a[a.size()-1]<<endl;
    cout<<a.back()<<endl;

    vector<int>ar;

    //copy one vector to another vector
    ar=a;
    cout<<a.size();
    cout<<endl;
    for(auto it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(238);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    //sorting in increasing order

    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    // sort(ans.begin(),ans.end(),greater<int>());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";
    // cout<<endl;
    // sort(ans.rbegin(),ans.rend());
    //     for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";

    cout<<endl;
    //search in binary search

    cout<<binary_search(ans.begin(),ans.end(),54)<<endl;

    cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;



}