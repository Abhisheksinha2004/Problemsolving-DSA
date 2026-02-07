#include<stdio.h>
int main(){
    int n=8;
    for(int i=0;i<n;i++)
    {
        if(i==3)
        {
             break;
            //  break exists the loop
        }
        printf("i=%d\n",i);
    }
    return 0;
}