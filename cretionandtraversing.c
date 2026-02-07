#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=20;
    head->next=second;
    second->data=21;
    second->next=third;
    third->data=45;
    third->next=fourth;
    fourth->data=67;
    fourth->next=NULL;

    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("Element are =%d\n",ptr->data);
        ptr=ptr->next;
    }
    
    // free(head);
    // free(second);
    // free(third);
    // free(fourth);

    return 0;

}