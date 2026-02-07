// #include<stdio.h>
// int main (){
//     int a[5]={1,2,3,4,5};// create 5 memory blocks 
//     a[2]=1000;
//     printf("%d",a[2]);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float a[4] ={1.2,4.5,5.6,6.7};
//     printf("%f",a[2]);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//    char a[5] = {'a','c','#','*'};
//    printf("%c",a[2]);
//    return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[9] ;
//          for(int i=0;i<=8;i++)
//          {
//             printf("Enter element number %d \n",i);
//             scanf("%d",&a[i]);
            
//          }
         
//          printf("%d",a[2]);
//          return 0;
// }
#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<=4;i++)
    {
        printf("enter the number %d\n",i+1);
        scanf("%d",&a[i]);
    }
         for(int i=0;i<=4;i++)
         {
          printf("%d\n",a[i]);
         }
    
    return 0;
}