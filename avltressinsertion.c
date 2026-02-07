#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
int height(struct node *N)
{
    if(N==NULL)
    {
        return 0;
    }
    else{
        return N->height;
    }
}
struct node *createnode(int  value)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->height=1;
    return newnode;
}
int max(int a,int b)
{
    return(a>b)?a:b;
}
struct node *rightrotate(struct node *y){
    struct node *x=y->left;
    struct node *T2=x->right;
    x->right=y;
    y->left=T2;
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}
struct node *leftrotate(struct node *x)
{
    struct node *y=x->right;
    struct node *T2=y->left; 
    y->left=x;
    x->right=T2;
    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return y;
}
int getbalance(struct node *N)
{
    if(N==NULL)
    {
        return 0;
    }
    else{
        return height(N->left)-height(N->right);
    }
}
struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    {
        return createnode(key);
    }
    if(key<node->data)
    {
        node->left=insert(node->left,key);
    }
    if(key>node->data)
    {
        node->right=insert(node->right,key);
    }
    else{
        return node;
    }
    node->height=1+max(height(node->left),height(node->right));
    int balance=getbalance(node);
    if(balance>1&&key<node->left->data)
    {
        return rightrotate(node);
    }
    if(balance<-1&&key>node->left->data)
    {
        return leftrotate(node);
    }
    if(balance>1&&key>node->left->data)
    {
        node->left=leftrotate(node->left);
        return rightrotate(node);
    }
    if(balance<-1&&key<node->right->data)
    {
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}
void inorder(struct node *root)
{
    if(root!=NULL){
    
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
    }
}
int main()
{
    struct node *root=createnode(24);
    root->left=createnode(15);
    root->right=createnode(29);
    root->left->left=createnode(10);
    root->left->right=createnode(20);
    root->right->left=createnode(26);
    root->right->right=createnode(30);
    int choice,key;
    do{
        printf("\n1.inorder traversal\n2.insertion\n3.exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("inorder traversal is\n");
            inorder(root);
            break;
            case 2:
            printf("Enetr the key\n");
            scanf("%d",&key);
            root=insert(root,key);
            break;
            case 3:
            printf("existing the program\n");
            break;
            default:printf("invalide choice\n");
        }
    }while(choice!=3);
    return 0;
}