// #include<stdio.h>
// int main()
// {
//     int factorial=1;
//     for(int i=1;i<=12;i++)
//     {
//         // using for loop
//         factorial*=i;
//     }
//     printf("%d",factorial);
//     return 0;
// }
#include<stdio.h>
int main ()
{
    int factorial = 1;
    int i;
    while(i<=4)
    {
        i++;
        factorial*=i;
    }
    printf("factorial = %d",factorial);
    return 0;
}
