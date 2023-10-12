#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
// enter the data in frint node
void frint()
{
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data in linklist\n");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else{
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data  in a frint of the linklist\n");
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
    }
}

// 2. enter the data in mid
void mid()
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
        printf("Enter the value for store the data after the value:\n");
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
// 3. enter the data in end
void end()
{
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data:\n");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else{
        struct Node *temp,*temp1;
        temp1=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data at end:\n");
        scanf("%d",&temp1->data);
        temp=head;
        while(temp!=NULL)
        {
            if(temp->next!=NULL)
            {
                temp=temp->next;
            }
            else{
                temp->next=temp1;
                temp1->next=NULL;
                temp=NULL;  //loop la khatm karyla lavlele dhokhe
            }
        }
    }
}

// 4. Delete node from beginning of LinkedList
void deleF()
{
    struct Node *temp;
    temp=head;
    printf("deleat this data:%d",temp->data);
    head=head->next;
    if(temp!=NULL)
    {
        temp->next=NULL;
        temp=NULL;
    }
}

// 6. Delete node from ending of LinkedList

void deleE()
{
    struct Node *temp,*temp1;
    temp=head;
    if(head->next==NULL)
    {
        head=head->next;
        printf("\nlinklest is emt");
    }
    while(temp->next!=NULL)
    {
        
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    int data=temp->data;
    printf("deleted data is:%d\n",data);
    //free(temp);
    temp=NULL;
}

// 5 Delete node from mid of LinkedList

void delM()
{
    struct Node *temp,*temp1;
    temp=head;
    int data1,flag=0;
    printf("enter the data for search:\n");
    scanf("%d",&data1);
    while(temp!=NULL)
    {
        if(temp->data==data1)
        {
            flag=1;
            break;
        }
        temp1=temp;
        temp=temp->next;
    }
    if(flag)
    {
        if(head->next==NULL)
        {
            head=NULL;
            printf("\nnode is emty\n");
        }
        else if(head==temp && head->next!=NULL)
        {
            head=temp->next;
            temp->next=NULL;
            temp=NULL;
        }
        else 
        {
            temp1->next=temp->next;
            temp->next=NULL;
            temp=NULL;
        }
    }
    else{
        printf("node is not found");
    }
}


void show()
{
    struct Node *temp;
    temp=head;
    int flag=1;
    while(temp!=NULL)
    {
        flag=0;
        int data=temp->data;
        printf("%d\t",data);
        temp=temp->next;
    }
    if(flag)
    {
        printf("\nlinklist is emty:\n");
    }
}
void exit1()
{
    printf("Exit");
}

int main()
{
    int choice;
    do
    {
        printf("\n1. enter the data in frint node\n");
        printf("2. enter the data in mid\n");
        printf("3. enter the data in end\n");
        printf("4. Delete node from beginning of LinkedList\n");
        printf("5. Delete node from mid of LinkedList\n");
        printf("6. Delete node from ending of LinkedList\n");
        printf("7. show the data\n");
        printf("8. Exit:\n");

        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            frint();
            break;
            case 2:
            mid();
            break;
            case 3:
            end();
            break;
            case 4:
            deleF();
            break;
            case 5:
            delM();
            break;
            case 6:
            deleE();
            break;
            case 7:
            show();
            break;
            case 8:
            exit1();
            break;
        } 
    }while(choice!=8);
    return 0;
}