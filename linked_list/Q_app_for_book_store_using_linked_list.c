/*
Objective: Develop application for book store by using linked 
list and user should store book
data like as   id, name, price, author public.

Case 1: Add New Book but book info should not be Duplicate 
Case 2: View All Books 
Case 3: Search book by id or name or author etc
Case 4: delete book by id 
Case 5: update book info by using id 
Case 6: count the book author wise 
Case 7: count the book price wise 
Case 8: count book publication wise 
Case 9: arrange authors names as per book count by using 
descending order
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
    int id,price;
    char name[30],auth[30];
    struct Book *next;
};
struct Book *head=NULL;
int data,flag=0,count=1;
// 1. Add New Book but book info should not be Duplicate
void addBinfo()
{
    if(head==NULL)
    {
        head=(struct Book*)malloc(sizeof(struct Book));
        printf("enter book id:\n");
        scanf("%d",&head->id);
        // printf("enter the name of book\n");
        // scanf("%s",&head->name);
        // printf("enter the price of book\n");
        // scanf("%d",&head->price);
        printf("enter the author of book\n");
        scanf("%s",&head->auth);
        head->next=NULL;
    }
    else{
        struct Book *temp,*temp1,*temp2;
        temp=head;
        temp2=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp1=(struct Book*)malloc(sizeof(struct Book));
        printf("enter the info about Book:\n");
        printf("enter book id:\n");
        scanf("%d",&temp1->id);
        // printf("enter the name of book\n");
        // // scanf("%s",&temp1->name);
        // printf("enter the price of book\n");
        // scanf("%d",&temp1->price);
        printf("enter the author of book\n");
        scanf("%s",&temp1->auth);
        temp1->next=NULL;
        temp->next=temp1;

        
        while(temp2->next!=NULL)
        {
            if(temp2->name==temp1->name)  //temp2->id==temp1->id || 
            {
                printf("Re ensert info about Book:\n");
                printf("enter book id:\n");
                scanf("%d",&temp1->id);
                // printf("enter the name of book\n");
                // scanf("%s",&temp1->name);
                // printf("enter the price of book\n");
                // scanf("%d",&temp1->price);
                printf("enter the author of book\n");
                scanf("%s",&temp1->auth);
                break;
            }
            temp2=temp2->next;
        }

    }
}

void viewBookDet()
{
    int flag=1;
    struct Book *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("book id:\n");
        printf("%d\n",temp->id);
        // printf("name of book\n");
        // printf("%s\n",temp->name);
        // printf("price of book\n");
        // printf("%d\n",temp->price);
        printf("author of book\n");
        printf("%s\n\n",temp->auth);
        temp=temp->next;
        flag=0;
    }
    if(flag)
    {
        printf("\nNo data present!!!\n");
    }
}
// Search book by id or name or author etc
void searchBook()
{
    struct Book *temp;
    temp=head;
    printf("enter the any id:\n");
    scanf("%d",&data);
    while(temp!=NULL)
    {
        if(temp->id==data)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag)
    {
        printf("book id:\n");
        printf("%d\n",temp->id);
        printf("name of book\n");
        printf("%s\n",temp->name);
        printf("price of book\n");
        printf("%d\n",temp->price);
        printf("author of book\n");
        printf("%s\n\n",temp->auth);   
    }
    else{
        printf("data is not found:\n");
    }
}
// delete book by id
void delById()
{
    struct Book *temp,*temp1;
    temp=head;
    printf("enter the any id for delete:\n");
    scanf("%d",&data);
    while(temp!=NULL)
    {
        if(temp->id==data)
        {
            flag=1;
            break;
        }
        temp1=temp;
        temp=temp->next;
    }
    if(flag)
    {
        if(head->id==data)
        {
            head=head->next;
            temp->next=NULL;
            temp=NULL;
        }
        else if(temp->next!=NULL && head->id!=data)
        {
            temp1->next=temp->next;
            temp->next=NULL;
            temp=NULL;
        }
        else{
            temp1->next=NULL;
            temp=NULL;
        }
    }

}

// update book info by using id
void updinfo()
{
    struct Book *temp,*temp1;
    temp=head;
    printf("enter the any id for update:\n");
    scanf("%d",&data);
    while(temp!=NULL)
    {
        if(temp->id==data)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag)
    {
                printf("update book info:\n");
                printf("enter book id:\n");
                scanf("%d",&temp->id);
                printf("enter the name of book\n");
                scanf("%s",&temp->name);
                printf("enter the price of book\n");
                scanf("%d",&temp->price);
                printf("enter the author of book\n");
                scanf("%s",&temp->auth);   

    }
    else{
        printf("\nid is invalid:\n");
    }
}

// 6 : count the book author wise

void counAuth()
{
    struct Book *temp1,*temp2,*temp3;
    
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp3=head;
        int f=0;
        while(temp1!=head && temp3->next!=NULL) // jar temp1 2 kiva 2 pekshy jasta aasla tar 
        {
            if(strcmp(temp3->auth,temp1->auth)==0)
            {
                temp1=temp1->next;
                temp3=head;
            }
            else if(temp3->next==temp1)
            {
                break;
            }
            temp3=temp3->next;

        }
        temp2=temp1->next;
        count=1;
        while(temp2!=NULL)
        {
            if(strcmp(temp1->auth,temp2->auth)==0)
            {
                count++;
                flag=1;

            }
            temp2=temp2->next;
        }
        
        if(flag)
        {
            printf("author=%s number of book is %d \n",temp1->auth,count);
        }
        else{
            printf("author=%s number of book is %d \n",temp1->auth,count);
        }
        temp1=temp1->next;
    }
    if(flag==0)
    printf("author=%s number of book is %d \n",temp1->auth,count);
}

//count the book price wise
void countBook()
{
    struct Book *temp1,*temp2,*temp3;
    int f=1;
    temp1=head;

    while(temp1->next!=NULL)
    {
        count=1;
        temp3=head;
        while(temp1!=head && temp3->next!=NULL)
        {
            if(temp3->price==temp1->price)
            {
                temp1=temp1->next;
            }
            else{
                if(temp3->next==temp1) // 10 20 20 30 tr hi he kam kar nar
                {
                    break;
                }
            }
            temp3=temp3->next;
        }
        temp2=temp1->next;

        while(temp2!=NULL)
        {
            if(temp1->price==temp2->price) // check price is same or not
            {
                count++;                   // count book for same price
                flag=1;
            }
            temp2=temp2->next;
        }
        if(flag)  // if book is more then 1 
        {
            printf("%d book are %d rupis\n",count,temp1->price);
        }
        else{
            printf("%d book are %d rupis\n",count,temp1->price);
        }
        temp1=temp1->next;
    }
    if(flag==0)
    {
        printf("%d book are %d rupis\n",count,temp1->price);
    }
}

int main()
{
    int choice;
    do{
        
        printf("Case 1: Add New Book info \n"); 
        printf("Case 2: View All Books\n"); 
        printf("Case 3: Search book by id or name or author etc\n");
        printf("Case 4: delete book by id\n"); 
        printf("Case 5: update book info by using id\n"); 
        printf("Case 6: count the book author wise\n"); 
        printf("Case 7: count the book price wise\n"); 
        printf("Case 8: count book publication wise\n"); 
        printf("Case 9: arrange authors names as per book count by using\n");
        printf("\nenter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addBinfo();
            break;
            case 2:
            viewBookDet();
            break;
            case 3:
            searchBook();
            break;
            case 4:
            delById();
            break;
            case 5:
            updinfo();
            break;
            case 6:
            counAuth();
            break;
            case 7:
            countBook();
            break;

        }
    } while(choice!=10);
     
}