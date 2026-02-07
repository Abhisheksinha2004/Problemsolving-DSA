#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("n =");
    scanf("%d",&n);

    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}