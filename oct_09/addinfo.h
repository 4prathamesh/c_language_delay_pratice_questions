#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee{
    int empid;
    char empname[100];
    char empemail[100];
     int empcontact;
     int empsaliry;
};


void addinfo(struct employee e[])
{
    for(int i=0;i<2;i++)
    {
        printf("enter employ id\n");
    scanf("%d",&e[i].empid);
    printf("enter name:");
    scanf("%s",&e[i].empname);
    printf("enter the email:\n");
    scanf("%s",&e[i].empemail);
    printf("enter the contact:\n");
    scanf("%d",&e[i].empcontact);
    printf("enter the saliry:\n");
    scanf("%d",&e[i].empsaliry);
    
    }


}

// 2
void show(struct employee e[])
{
    for(int i=0;i<2;i++)
    {
        printf("%d\n",e[i].empid);
        printf("%s\n",e[i].empname);
        printf("%s\n",e[i].empemail);
        printf("%d\n",e[i].empcontact);
        printf("%d\n",e[i].empsaliry);
        printf("\n");
    }
    
}

// 3.search employee by id then employee is found or not:
void searchemp(struct employee e[])
{
    int eid,flag=0,index=0;
    printf("enter the id of employee:\n");
    scanf("%d",&eid);
    for(int i=0;i<2;i++)
    {
        if(e[i].empid==eid)
        {
            index=i;
            flag=1;
        }
    }
    if(flag)
    {
        printf("employee is found\n");
            printf("%d\n",e[index].empid);
            printf("%s\n",e[index].empname);
            printf("%s\n",e[index].empemail);
            printf("%d\n",e[index].empcontact);
            printf("%d\n",e[index].empsaliry);
    }
    else
    {
        printf("employee is not found");
    }
}

// update employee details by name:
void update(struct employee e[])
{
    int flag=0,in=0;
    char name[100];
    printf("enter the emp name:\n");
    scanf("%s",&name);
    for(int i=0;i<2;i++)
    {
        if(strcmp(e[i].empname,name)==0)
        {
            flag=1;
            in=i;
        }
    }
    if(flag)
    {
        printf("employee is present now update details :\n");
            printf("id\n");
            scanf("%d",&e[in].empid);
            printf("name\n");
            scanf("%s",&e[in].empname);
            printf("email\n");
            scanf("%s",&e[in].empemail);
            printf("cont\n");
            scanf("%d",&e[in].empcontact);
            printf("sali\n");
            scanf("%d",&e[in].empsaliry);
            printf("%d\n",e[in].empid);
            printf("%s\n",e[in].empname);
            printf("%s\n",e[in].empemail);
            printf("%d\n",e[in].empcontact);
            printf("%d\n",e[in].empsaliry);
    }
    else{
        printf("employee is not found\n");
    }
}

// delate employee details by email:
void delate(struct employee e[])
{
    int flag=0,count=2,i;
    char em[100];
    printf("enter the emp email:\n");
    scanf("%s",&em);
    for(int i=0;i<2;i++)
    {
        if(strcmp(e[i].empemail,em)==0)
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("employee is present now delate employee details :\n");
        for(int j=i;j<2;j++)
        {
            e[j]=e[j+1];
        }
        count--;
        for(int i=0;i<count;i++)
        {
            printf("%d\n",e[i].empid);
            printf("%s\n",e[i].empname);
            printf("%s\n",e[i].empemail);
            printf("%d\n",e[i].empcontact);
            printf("%d\n",e[i].empsaliry);
        }
    }
    else{
        printf("employee is not found\n");
    }
}

// 6. display list count of the employee in company
void count(struct employee e[])
{
    printf("%d",count);
}

// 7. display list the employeein ascending order of employee salary
void salaryAse(struct employee e[])
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<2;j++)
        {
            if((e[i].empsaliry) < ( e[j].empsaliry) )
            {
                struct employee temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("%d\n",e[i].empid);
        printf("%s\n",e[i].empname);
        printf("%s\n",e[i].empemail);
        printf("%d\n",e[i].empcontact);
        printf("%d\n",e[i].empsaliry);
    }

}

// 8. display the employee details in highestsalary
void highSal(struct employee e[])
{
    int max=e[0].empsaliry,i,j;
    for(i=0;i<2;i++)
    {
        if(e[i].empsaliry>max)
        {
            max=e[i].empsaliry;
            j=i;
        }
    }
    printf("highestsalary\n");
        printf("%d\n",e[j].empid);
        printf("%s\n",e[j].empname);
        printf("%s\n",e[j].empemail);
        printf("%d\n",e[j].empcontact);
        printf("%d\n",e[j].empsaliry);
}

// 9. display the employee details in minimum salary
void minSal(struct employee e[])
{
    int min=e[0].empsaliry,i,j;
    for(i=0;i<2;i++)
    {
        if(e[i].empsaliry<min)
        {
            min=e[i].empsaliry;
            j=i;
        }
    }
    printf("highestsalary\n");
        printf("%d\n",e[j].empid);
        printf("%s\n",e[j].empname);
        printf("%s\n",e[j].empemail);
        printf("%d\n",e[j].empcontact);
        printf("%d\n",e[j].empsaliry);
}

// exit
void exit1(struct employee e[])
{
    printf("exit");
}