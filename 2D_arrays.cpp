#include<iostream>
using namespace std;
void print(int a[][4],int r,int c)
{
    // printing column wise
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            cout<<a[i][j]<<" ";
        }
    }

}
int main()
{
    int a[3][4]={1,2,3,52,56,5,4,2,7,9,10,11};
    print(a,3,4);

    // searching an element
int target=58;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==target)
            {
                cout<<"present";
                return 0;
            }
        }
        
    }
    cout<<"Not present";
}
