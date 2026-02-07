#include<stdio.h>
int main(){
int a[5],*p,sum;
float avg;
printf("Enter arrays elements");
for(int i = 0;i<5;i++)
{
    scanf("%d",&a[i]);
}
p=&a[0];
sum=0;
for(int i =0;i<5;i++)
{
    sum+=*(p+i);
}
avg=sum/5;
printf("sum =%d avg=%.2f",sum,avg);
return 0;
}