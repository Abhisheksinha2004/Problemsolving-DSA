// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;          //insertion at beginnig
//     struct node *next;
// };
// int main()
// {
//     struct node *head,*second,*third,*fourth;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     fourth=(struct node *)malloc(sizeof(struct node));
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=fourth;
//     fourth->data=4;
//     fourth->next=head;
//     struct node *newnode;
//     newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->data=420;
//     fourth->next=newnode;
//     newnode->next=head;
//     head=newnode;
//     struct node *ptr=head;
//     do{
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;

//     }while(ptr!=head);
//     return 0; 
// }






#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;          //insertion at beginnig
    struct node *next;
};
int main()
{
    int position,i;
    struct node *head,*second,*third,*fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=head;
    struct node *ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the position\n");
    scanf("%d",&position);
    newnode->data=32;
    if(position==1){
    // newnode->data=420;
    fourth->next=newnode;
    newnode->next=head;
    head=newnode;
    }
    else{
        ptr=head;
        for(i=1;i<position-1 && ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
        

    }
    ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }while(ptr!=head);
    return 0; 
}