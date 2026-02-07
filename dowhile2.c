#include<stdio.h>
int main()
{
int i =1,n;
printf("Enter integer value of n:");
scanf("%d",&n);
printf("The natural numbers are:\n");
do{
    printf("%d\n",i);
    i++;
}while(i<=n);
return 0;
}

