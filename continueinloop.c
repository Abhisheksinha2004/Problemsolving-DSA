#include<stdio.h>
int main()
{
    int n =15;
    for(int i=0;i<=n;i++)
    {
        if(i==5)
        {
            continue;
            // continue will exits the iteration
        }
        printf("i=%d\n",i);
    }
    return 0;
}