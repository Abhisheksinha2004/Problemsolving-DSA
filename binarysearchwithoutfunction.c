#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int element;
    printf("enter the element\n");
    scanf("%d",&element);
    int l=0,h=5;
    int mid=(l+h)/2;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==element)
        {
            printf("element is found at %d position ",mid+1);
        }
       else if(a[mid]<element)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    printf("the element is not found");
    return 0;

}