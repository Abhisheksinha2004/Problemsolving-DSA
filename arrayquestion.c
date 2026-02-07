#include<stdio.h>
int main()
{
    int marks[10]={36,67,32,23,25,66,78,68,54,35};
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            printf("The roll number are %d\n",i+1);
        }
    }
    return 0;
}