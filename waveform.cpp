#include<iostream>
using namespace std;
void wave(int a[][4],int row,int col)
{
    for(int j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
            else{
                for(int i=row-1;i>=0;i--)
                {
                    cout<<a[i][j]<<" ";
                }
            }
        }
    }
 

   int main()
    {
        int a[3][4]={1,2,3,4,5,6,7,8,9};
        wave(a,3,4);
    }
