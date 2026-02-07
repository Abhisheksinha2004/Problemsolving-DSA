#include<stdio.h>
int main()
{
    int m ;
    printf("m =");
    scanf("%d",&m);
    if(m<=40)
    {
        printf("fail");
    }
    else if(m>40&&m<=50)
    {
        printf("c");
    }
    else if(m>50&&m<=60)
    {
        printf("b");
    }
    else if(m>60&&m<=70)
    {
        printf("a");
    }
    else
    {
        printf("a++++");
    }
    return 0;
}