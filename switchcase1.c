#include<stdio.h>
int main()
{
int age,marks;
printf("Enter your age\n");
scanf("%d",&age);
printf("enter your marks");
scanf("%d",&marks);
switch(age)
{
    case 3:
    printf("your age is 3\n");
    switch(marks)
    {
        case 90:
        printf("your marks are 90");
        break;
        default:
        printf("your marks are not 90");
        break;
    }
    break;

case 45:
    printf("your age is 45\n");
    break;
    

case 30:
    printf("your age 30\n");
    break;

default:
    printf("your age is not 3,45or30");
    break;
}
return 0;
}