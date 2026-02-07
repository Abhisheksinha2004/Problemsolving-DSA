#include<stdio.h>
int main()
{
    float basic,gross,da,hra;
printf("basic=");
scanf("%f",&basic);
if(basic<=10000)
{
    da = basic*0.8;
    hra =basic*0.2;
}
else if(basic<=20000)
{
    da = basic*0.9;
    hra =basic*0.4;
}
else
{
    da = basic*0.95;
    hra =basic*0.3;
}
gross =(basic+da+hra);
printf("gross= %f",gross);
return 0;
}