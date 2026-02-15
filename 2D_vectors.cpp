#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >mat(3,vector<int>(4,1));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<mat[i][j]<<" ";

        }
    }
    cout<<"Rows="<<mat.size();
    cout<<endl;
    cout<<"Col="<<mat[0].size();

     int m,n;
     cout<<"Enter the rows and col: ";
     cin>>m>>n;
     vector<vector<int> >mat1(m,vector<int>(n,1));
 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat1[i][j];
        }
    }

      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat1[i][j]<<" ";
            
        }
        cout<<endl;
    }
}