#include<iostream>
using namespace std;
int main()
{
    int a1[3][4]={1,2,3,4,5,6,7,8,9,10,12,11};
    int a2[3][4]={22,33,443,1,22,4,2,45,65,67,12,43};
    int ans[3][4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            ans[i][j]=a1[i][j]+a2[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}