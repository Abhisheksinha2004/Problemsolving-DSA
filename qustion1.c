#include<stdio.h>
int main()
{
int num[26],temp;
num[25]=200;
num[0]=100;
temp=num[25];
num[25]=num[0];
num[0]=temp;
printf("%d \n%d",num[25],num[0]);
return 0;
}