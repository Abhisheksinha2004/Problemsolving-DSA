#include<stdio.h>
int main()
{
    int height;
    printf("height =");
    scanf("%d",&height);
    if(height<150)
    {
        printf("drawf");
    }
        else if(height>150&&height<=165)
        {
            printf("avg. height");
        }
        else if(height>165&&height<=195)
        {
            printf("taller");
        }
        
        else{
            printf("abnormal height");
        }
        return 0;
}