#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

    Node *CreateLinkedList(int arr[],int index,int size)
    {
        if(index==size)
        {
            return NULL;

        }

        Node *temp=new Node(arr[index]);
        temp->next=CreateLinkedList(arr,index+1,size);
        return temp;
    }


int main()
{
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,8,10};
    Head=CreateLinkedList(arr,0,5);
//Delete a node at begining
    // if(Head!=NULL)
    // {
    //     Node *temp=Head;
    //     Head=Head->next;
    //     delete temp;
    // }

    //Delete a node at end

    if(Head!=NULL)
    {
        //only one node exists
        if(Head->next==NULL)
        {
            delete Head;
            Head=NULL;
        }
        //more than 1 exists
        else{
            Node *curr=Head;
            Node *prev=NULL;

            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }

            prev->next=curr->next;
            delete curr;
        }
    }




    Node *temp;
    temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

