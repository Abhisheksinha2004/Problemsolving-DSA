#include<stdio.h>
int main()
{
    int i=0;
    int sum=0;
    printf("The sum of first ten natural number are\n");
    while(i<=10)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}