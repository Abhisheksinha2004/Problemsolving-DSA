#include<stdio.h>
int main()
{
    int a ;
    printf("a =");
    scanf("%d",a);
    if(a%2==0)
    {
        if(a%4==0)
        {
            printf("a is divisible by 4");
        }
        else
        {
            printf("a is not divisible by 4");
        }
    }
    else
    {
        
        if(a%3==0)
        {
            printf("a is divisible by 3");
        }
        else
        {
            printf("a is not divisible by 3");
        }
    }
    return 0;
    }