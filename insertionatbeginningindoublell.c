#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next,*prev;

};
int main ()
{
    struct node *head,*second,*third,*fourth ;
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
    newnode->data=45;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
    printf("update linkedlist\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d<->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    return 0;
}

