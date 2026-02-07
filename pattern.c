// #include<stdio.h>
// int main()
// {
//  int i,j,n;
// printf("n=");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
//     for(j=1;j<=n;j++)
//     {
//         printf("*    ");
//     }
//     printf("\n");
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i ,j , n;
//     printf("n=");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             printf("%d   ",j); //prints row number
//         }
//     printf("\n"); //moves to next line
//     }
//     return 0;
// }

// 

#include<stdio.h>
int main ()
{
    int i,j,n;

printf("n=");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("%d ",6-i);
    }
    printf("\n");
}
return 0;
}