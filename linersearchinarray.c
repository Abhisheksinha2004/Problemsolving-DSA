#include<stdio.h>
int linearSearch(int a[],int size,int element){
    for(int i=0;i<size;i++){ // in liner search we can use both sorted and unserted array
        if(a[i]==element)
        {
            return i;
        }
        
    }
    return -1;
}
    
    int main()
    {
        int a[]={20,22,12,1,34,21,222,3};
        int size=sizeof(a)/sizeof(int);
        int element=2;
        int searchIndex=linearSearch(a,size,element);
        printf("the %d element found at %d index",element,searchIndex);
        return 0;
    }
