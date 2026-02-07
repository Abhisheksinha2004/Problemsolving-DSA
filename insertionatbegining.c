#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*second, *third,*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third =(struct node*)malloc(sizeof(struct node));
fourth =(struct node*)malloc(sizeof(struct node));

head->data=2;
head->next=second;
second->data=3;
second->next=third;
third->data=5;
third->next=fourth;
fourth->data=4;
fourth->next=NULL;
struct node *ptr=head;
while(ptr!=NULL)
{
    printf("Element = %d\n",ptr->data);
    ptr=ptr->next;
}
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=542;
newnode->next=head;
head=newnode;
printf("Elements after insertion\n");
 ptr=head;
while(ptr!=NULL)
{
    printf("Element =%d\n",ptr->data);
    ptr=ptr->next;
}
int searchvalue;
printf("enter the value to search\n");
scanf("%d",&searchvalue);
ptr=head;
while(ptr!=NULL)
{
    if(ptr->data==searchvalue)
    {
        printf("the value is=%d",searchvalue);
        return 0;
    }
    ptr=ptr->next;
}
printf("the element is not found",searchvalue);
return 0;
}