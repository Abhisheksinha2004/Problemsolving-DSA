// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("n=");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main ()
// {
//     int i,j,n;
//     printf("n =");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("n =");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);

//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("n =");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",j+64);

//         }
//         printf("\n");
//     }
//     return 0;
// } 

// #include<stdio.h>
// int main()
// {
//     int i,j,n,k=1;
//     printf("n =");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",(k++)%2);

//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int i,j,n;
    printf("n =");
    scanf("%d",&n);
    

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",j+97);
        }
        printf("\n");
    }
    return 0;
}