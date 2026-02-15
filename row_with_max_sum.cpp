#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void printrowmax(int arr[][4],int row,int col)
{
    int id=-1,sum=INT_MIN;
    for(int i=0;i<row;i++)
    {
        int total=0;
        for(int j=0;j<col;j++)
        {
            total+=arr[i][j];
            
        }
        if(total>sum)
        {
            sum=total;
            id=i;
        }
    }
    cout<<id;

    }
int main()
{
    
    vector<vector<int>> matrix = {
        {3, 4, 7, 18},
        {2, 8, 3, 9},
        {5, 4, 2, 2},
        {7, 3, 0, 8},
        {2, 8, 9, 1}
    };

    int maxSum = INT_MIN;
    int index = -1;

    for(int i = 0; i < matrix.size(); i++)
    {
        int total = 0;

        for(int j = 0; j < matrix[i].size(); j++)
        {
            total += matrix[i][j];
        }

        
        if(total > maxSum)
        {
            maxSum = total;
            index = i;
        }
    }

    cout << "Row index with maximum sum: " << index << endl;
    cout << "Maximum sum: " << maxSum << endl;

   int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printrowmax(arr,3,4);

    return 0;
}



