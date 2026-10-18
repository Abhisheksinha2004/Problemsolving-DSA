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

int main()
{
    Node *Head,*tail;
    tail=Head=NULL;

    int arr[]={2,3,4,5,10};
    //insert the value at end

    for(int i=0;i<5;i++)
    {
        //LinkedList is empty
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
            tail=Head;
        }
        //LinkedList is not empty

        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;

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