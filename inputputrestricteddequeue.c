#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int dq[MAXSIZE];
int front =-1,rear=-1;
int main()
{
    int choice,val;
    do{
        printf("\n1.insertfromrear\n2.deletefromfront\n3.deletefromrear\n4.display\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if(rear==MAXSIZE-1)
            {
                printf("dqueue is empty");
            }
            else{
                printf("enter the value\n");
                scanf("%d",&val);
                dq[++rear]=val;
            }
            break;
            case 2:
            if(front==-1)
            {
                printf("dq is empty");
            }
            else{
                printf("dequed element=%d",dq[front--]);

            }
            break;
            case 3:
            if(front==-1)
            {
                printf("dq is empty");
            }
            else{
                printf("dequeued element=%d",dq[rear--]);
            }
            break;
            case 4:
            if(front==-1)
            {
                printf("dq is empty");
            }
            else{
                printf("the elements are\n");
                for(int i=front;i<=rear;i++)
                {
                    printf("%d\n",dq[i]);
                }
            }
            break;
            default:printf("invalid choice")
        }
    }while(choice!=4);
    return 0;

}