#include<iostream>
#include<vector>
using namespace std;
int buysell(vector<int>&prices)
{
    int bestBuy=prices[0],maxprofit=0;
    for(int i=1;i<prices.size();i++)
    {
        bestBuy=min(bestBuy,prices[i]);
      int profit=prices[i]-bestBuy;
      maxprofit=max(maxprofit,profit);
    }
    return maxprofit; 
}
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    cout<<buysell(prices)<<endl;
    return 0;
}