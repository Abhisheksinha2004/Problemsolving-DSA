// #include<stdio.h>
// int main(){
//     int i;
//     int sum=0;
//     printf("The sum of natural numbers are\n");
//     for(i=0;i<=10;i++)
//     {

//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int i=0;
    int sum=0;
    printf("The sum of natural numbers are\n");
    do{
        sum+=i;
        i++;
    }while(i<=10);           
    printf("%d",sum);
    return 0;
}