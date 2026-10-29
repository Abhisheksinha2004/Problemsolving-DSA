#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
        next=prev=NULL;
    }
};

int main()
{
    Node *head=NULL;

    // LinkedList does not exist
    if(head==NULL)
    {
        head=new Node(5);
    }
    // Already exist
    else{
        Node *temp=new Node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

    // for traversing the list
    Node *trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}