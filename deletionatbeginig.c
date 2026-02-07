#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main(){
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
fourth->next=NULL;

struct node *ptr = head;
while(ptr!=NULL)
{
    printf("Element=%d\n",ptr->data);
    ptr=ptr->next;
}
ptr=head;
head=head->next;
free(ptr);
printf("updated linked list\n");
ptr=head;
while(ptr!= NULL)
{
    printf("Elements=%d\n",ptr->data);
    ptr=ptr->next;

}
return 0;
}