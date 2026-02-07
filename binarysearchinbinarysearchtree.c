#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int value)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *search(struct node *root,int key)
{
    if(root==NULL||root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        search(root->left,key);
        }
        else{
            search(root->right,key);
        }

}
int main()
{
    int key;
    printf("enter the element to be found\n");
    scanf("%d",&key);
    struct node *root=createnode(15);
    root->left=createnode(10);
    root->right=createnode(22);
    root->left->left=createnode(8);
    root->left->right=createnode(12);
    root->right->left=createnode(16);
    root->right->right=createnode(25);
    struct node *result=search(root,key);
    printf("the element %d is found ",key);
    break;
    printf("the element %d is not found",key);
    return 0;
}