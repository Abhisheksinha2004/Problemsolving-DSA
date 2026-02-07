#include<stdio.h>
int main()
{
    int i,a[5];
    printf("enter the elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements are \n");
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}