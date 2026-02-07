#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
int main()
{
    struct node *head,*second,*third,*fourth;
    head =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));\
    head->data=4;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=67;
    fourth->next=NULL;

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("Element= %d\n",ptr->data);
        ptr=ptr->next;
    }

    struct node *newnode;
    newnode =(struct node*)malloc(sizeof(struct node));
    int position,i;
    printf("Enter the position you want\n ");
    scanf("%d",&position);

    printf("Enter the data\n");
    scanf("%d",&newnode->data);

    
    if(position==1)
    {
       newnode->next=head;
       head=newnode;
    }
    else{
        ptr=head;
        for(i=1;i<position-1 && ptr!=NULL;i++)
        {
            ptr= ptr->next;
    }
    // if(ptr==NULL)
    // {
    //     printf("Invalid position");
    // }else{
    newnode->next=ptr->next;
    ptr->next = newnode;
    }

    printf("Updated linked list= \n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("Element= %d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;

}