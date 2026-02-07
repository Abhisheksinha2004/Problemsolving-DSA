#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int value)
{
    struct node *newnode=(struct node * )malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void preorder(struct node *root)
{
    if(root!=NULL){
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
    struct node *root= createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    root->right->left=createnode(6);
    root->right->right=createnode(7);
    int choice;
    do{
        printf("\n1.preorder\n2.inorder\n3.postorder\n");
        printf("enter the choices\n");
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
            default:printf("invalid choice\n");
        }
    }while(choice!=3);
    return 0;
}

