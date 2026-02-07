#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=1;head->prev=NULL;head->next=second;
    second->data=2;second->prev=head;second->next=third;
    third->data=3;third->prev=second;third->next=fourth;
    fourth->data=4;fourth->prev=third;fourth->next=NULL;

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d<->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);

    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
        newnode->prev=ptr;
        newnode->next=NULL;
        ptr->next=newnode;
    
    printf("Updated listis\n");
    ptr=head;
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->next;
}
printf("NULL\n");
return 0;
}