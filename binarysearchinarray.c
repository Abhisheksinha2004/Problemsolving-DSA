#include<stdio.h>
int linearSearch(int a[],int size,int element){
for(int i=0;i<size;i++)
{
    if(a[i]==element){
       return i;
    }
}
return -1;
}

int binarySearch(int a[],int size,int element)
{
    int low,mid,high;
    low = 0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==element){
            return mid;
        }
        if(a[mid]<=element){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
}
return -1;
}
int main(){
    int a[]={20,30,40,50,60,70,75};
    int size=sizeof(a)/sizeof(int);
    int element=40;
    int searchIndex=binarySearch(a,size,element);
    printf("The element %d is found at %d index",element,searchIndex);
    return 0;
}

