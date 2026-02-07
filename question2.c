// #include<stdio.h>         //to find sum of elements
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<5;i++)
//     {
//         sum+=a[i];
      
//     }
//       printf("%d ",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int product=1;
//     for(int i=0;i<5;i++)
//     {
//         product*=a[i];

//     }
//     printf("%d",product);
//     return 0;
// }

// To find maximum element in a  given set of array

#include<stdio.h>
int main()
{
    int a[7]={-1,-2,48,-4,-6,-41,-6};
    int max=a[0];
    for(int i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}