#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("elements=%d\n",ptr->data);
        ptr=ptr->next;
    }

    int position,i;
    printf("Enter the position\n");
    scanf("%d",&position);
    ptr=head;
  
    if(position==1)
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
    else{
    ptr=head;
    for(i=1;i<position-1 && ptr!=NULL;i++)
    {
        ptr=ptr->next;

    }
    
}
        

    struct node *q;
    if(ptr==NULL||ptr->next==NULL){
        printf("invalid position\n");
    }
        else{
    q=ptr->next;
    ptr->next=q->next;
    free(q);
 
        }

    printf("updated linked list\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("Element=%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;

}