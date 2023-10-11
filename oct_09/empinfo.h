#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee 
{
    int empid;
    char empname[100];
    char empemail[100];
    int empcontact;
    int empsaliry;
};
int size,i;
struct employee *e;

void addinfo()
{
    printf("enter size :\n");
    scanf("%d",&size);
    e=(struct employee*)malloc(sizeof(struct employee)*size); 
    for(int i=0;i<size;i++)
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
void show()
{
    for(i=0;i<size;i++)
    {
        printf("employ id\n");
        printf("%d\n",e[i].empid);
        printf("name:\n");
        printf("%s\n",e[i].empname);
        printf("email:\n");
        printf("%s\n",e[i].empemail);
        printf("contact:\n");
        printf("%d\n",e[i].empcontact);
        printf("saliry:\n");
        printf("%d\n",e[i].empsaliry);
    }
    
}