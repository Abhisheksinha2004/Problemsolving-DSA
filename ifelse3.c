#include<stdio.h>
int main(){
    int x ;
    printf("Enter the vale of x ");
    scanf("%d",&x);
                if((x%2==0)&&(x%3==0))
                {
                printf("The number is exactly divisible by  2 and 3 ");
                }
                
                else
                {
                printf("The number is not divisible by 2 and 3 ");
                }   
                    return 0 ;
             
}