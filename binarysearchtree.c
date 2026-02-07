#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *right;
    struct node *left;
};
struct node *createnode(int value)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {

    
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
    }
}
int main()
{
    struct node *root=createnode(12);
    root->left=createnode(9);
    root->right=createnode(15);
    root->left->left=createnode(6);
    root->left->right=createnode(10);
    root->right->left=createnode(14);
    root->right->right=createnode(17);
    int choice;
    do{
        printf("\n1.preorder\n2.inorder\n3.postorder\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("preorder traversal\n");
            preorder(root);
            break;
            case 2:
            printf("inorder traversal\n");
            inorder(root);
            break;
            case 3:
            printf("postorder traversal\n");
            postorder(root);
            break;
            default:printf("invalide choice");
        }
    }while(choice!=3);
    return 0;
}