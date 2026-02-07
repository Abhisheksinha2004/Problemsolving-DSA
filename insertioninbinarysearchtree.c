#include<stdio.h>
#include<stdlib.h>
struct node *{
    int data;
    struct node *left;
    struct node *right;
};
struct node createnode(int value){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode; 
}
struct node *insert(struct node *root,int value){
    if(root==NULL)
    {
        return createnode(value);
    }
    else if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else{
        root->right=insert(root->right,value);
    }
    return root;
}
struct node *search(struct node *root,int key)
{
    if(root==NULL||root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
void inorder(struct node *root)
{
    inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
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

    int key,value,choice;
    do{
        printf("\n1.insert\n2.search\n3.inorder traversal\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the value to insert\n");
            scanf("%d",&value);
            root=insert(root,value);
            break;
            case 2:
            printf("Enter the element to search\n");
            scanf("%d",&key)
            if(search(root,key))
            {
                printf("element %d is found",key);
            }
            else{
                printf("element %d is not found",key);
            }
            break;
            case 4:
            printf("inorder traversal is \n");
            inorder(root);
            break;
            default:printf("invalide choices");
        }
    }while(choice!=3);
    return 0;
    
}