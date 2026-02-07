#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    int position,i;
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
     
     newnode=(struct node*)malloc(sizeof(struct node));;
    //  newnode->next=NULL;
    //  newnode->prev=NULL;
     printf("enter thr data to be inserted\n");
     scanf("%d",&newnode->data);
     printf("enter the position\n");
     scanf("%d",&position);

     

     if(position==1)
     {
        newnode->prev=NULL;
        newnode->next=head;
        // head->prev=newnode;
        head=newnode;
     }
     else{
        
        ptr=head;
        for(i=1;i<position-1 && ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
        newnode->prev=ptr;
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
     
        // if(ptr==NULL||ptr->next==NULL)
        // {
        //     printf("invalide position\n"); 
        // }
    
     
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d<->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
     
     return 0;
}