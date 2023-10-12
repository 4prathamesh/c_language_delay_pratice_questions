#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

void inmid()
{
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data:\n");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else if(head->next==NULL){
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter data in second node:\n");
        scanf("%d",&temp->data);
        head->next=temp;
        temp->next=NULL;
    }
    else{
        struct Node *temp1,*temp2,*temp3;
        temp1=head;
        int flag=0,value;
        printf("Enter search value :\n");
        scanf("%d",&value);
        while(temp1!=NULL){
            temp2=temp1;
            if(temp1->data==value){
                flag=1;
                temp1=temp1->next;
                break;
            }
            temp1=temp1->next;
            temp3=temp1->next;
        }
        if(flag){
            struct Node *temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            printf("Enter value in middle node:\n");
            scanf("%d",&temp->data);
            temp2->next=temp;
            temp->next=temp1;
        }
        else{
            printf("Value not found");
        }
    }
}
void show()
{
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        int data=temp->data;
        printf("%d\t",data);
        temp=temp->next;
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n1. enter the data in end\n");
        printf("2. show the data\n");
        printf("\nenter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            inmid();
            break;
            case 2:
            show();
            break;
        } 
    }while(choice!=3);
    return 0;
}