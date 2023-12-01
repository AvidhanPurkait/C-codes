//Implement a Queue Using Linked List

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert();
void del();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\n\tQUEUE IMPLEMENTATION USING LINKED LIST\n");
        printf("\n1. Insert Element in The Queue\n");
        printf("2. Delete Element From The Queue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("\nEnter The Operation to be Performed: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            		insert();
            		break;
            case 2:
            		del();
            		break;
            case 3:
            		display();
            		break;
            case 4:
            		exit(0);
            		break;
            default:
            		printf("\n!!! INVALID CHOICE !!!\n");
        }
    }
    return(0);
}
void insert()
{
    struct node *ptr;
    int val;

    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\n!! Queue Overflow !!\n");
        return;
    }
    else
    {
        printf("\nEnter The Data: ");
        scanf("%d",&val);
        ptr->data=val;
		ptr->link=NULL;
        if(rear==NULL)
        {
            front=ptr;
            rear=ptr;
        }
        else
        {
            rear->link=ptr;
            rear=rear->link;
        }
    }
}

void del()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("\n!! Queue Underflow !!\n");
        return;
    }
    else
    {
    	printf("\nElement %d is Deleted.",front->data);
        temp=front;
        front=front->link;
        free(temp);
    }
}

void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    {
        printf("\nQueue is Empty...");
    }
    else
    {
		printf("\nThe Queue Contains: ");
        while(ptr!=NULL)
        {
            printf("\t%d",ptr->data);
            ptr=ptr->link;
        }
    }
}
