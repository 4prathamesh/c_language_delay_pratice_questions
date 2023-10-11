/*
create a structure called employee to hold empid,empname,empemail,empcontact and empsaliry.
write a menu driven program in c that implements the working of employee using create a header file andfunction
1. add employee details.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"addinfo.h"
int main() 
{
    struct employee e[2];
    
    printf("1. add employee details:\n");
    printf("2. display employee details:\n");
    printf("3. search employee by id then employee is found or not:\n");
    printf("4. update employee details by name:\n");
    printf("5. delate employee details by email:\n");
    printf("6. display list count of the employee in company:\n");
    printf("7. display list the employeein ascending order of employee salary:\n");
    printf("8. display the employee details in highestsalary\n");
    printf("9. display the employee details in minimum salary\n");
    printf("10. exit.\n");
    int choice;
    do
    {
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addinfo(e);
            break;
            case 2:
            show(e);
            break;
            case 3:
            searchemp(e);
            break;
            case 4:
            update(e);
            break;
            case 5:
            delate(e);
            break;
            case 6:
            count(e);
            break;
            case 7:
            salaryAse(e);
            break;
            case 8:
            highSal(e);
            break;
            case 9:
            minSal(e);
            break;
            case 10:
            exit1(e);
            break;
        }
    }
    while(choice!=10);
    
    return 0;
}