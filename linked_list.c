#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;



void insertBegin()
{
    struct Node *newnode;

    newnode=malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=head;

    head=newnode;

    printf("Inserted\n");
}



void insertEnd()
{
    struct Node *newnode,*temp;

    newnode=malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;

        return;
    }

    temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newnode;

    printf("Inserted\n");
}



void display()
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("List Empty\n");

        return;
    }

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);

        temp=temp->next;
    }

    printf("NULL\n");
}



void search()
{
    int key,pos=1;

    struct Node *temp=head;

    printf("Enter value to search: ");

    scanf("%d",&key);

    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("Found at position %d\n",pos);

            return;
        }

        pos++;

        temp=temp->next;
    }

    printf("Not Found\n");
}



void count()
{
    int c=0;

    struct Node *temp=head;

    while(temp!=NULL)
    {
        c++;

        temp=temp->next;
    }

    printf("Total Nodes: %d\n",c);
}



void deleteNode()
{
    int value;

    printf("Enter value to delete: ");

    scanf("%d",&value);

    if(head==NULL)
    {
        printf("Empty List\n");

        return;
    }



    if(head->data==value)
    {
        struct Node *del=head;

        head=head->next;

        free(del);

        printf("Deleted\n");

        return;
    }



    struct Node *temp=head;

    while(temp->next!=NULL &&
          temp->next->data!=value)
    {
        temp=temp->next;
    }



    if(temp->next==NULL)
    {
        printf("Value Not Found\n");

        return;
    }



    struct Node *del=temp->next;

    temp->next=del->next;

    free(del);

    printf("Deleted\n");
}



void freeList()
{
    struct Node *temp;

    while(head!=NULL)
    {
        temp=head;

        head=head->next;

        free(temp);
    }
}



int main()
{
    int choice;

    do
    {
        printf("\n===== LINKED LIST =====\n");

        printf("1.Insert Beginning\n");

        printf("2.Insert End\n");

        printf("3.Delete Node\n");

        printf("4.Search Node\n");

        printf("5.Count Nodes\n");

        printf("6.Display\n");

        printf("7.Exit\n");

        printf("Enter choice: ");

        scanf("%d",&choice);



        switch(choice)
        {
            case 1:

                insertBegin();

                break;

            case 2:

                insertEnd();

                break;

            case 3:

                deleteNode();

                break;

            case 4:

                search();

                break;

            case 5:

                count();

                break;

            case 6:

                display();

                break;

            case 7:

                freeList();

                printf("Exit");

                break;

            default:

                printf("Invalid Choice");
        }

    }
    while(choice!=7);

    return 0;
}
