#include<stdio.h>
int main()
{
    int sum =0;
    printf("The sum of numbers consisting in the table of 8 is ");
for(int i=0;i<=10;i++)
{
    sum+=8*i;
}
printf("%d",sum);
return 0;
}