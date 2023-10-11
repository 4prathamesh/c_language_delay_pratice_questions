#include<stdio.h>
#include"empinfo.h"
int main() 
{
    
    struct employee *e;
    
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
        printf("\nenter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addinfo();
            break;
            case 2:
            show();
            break;
            // case 3:
            // searchemp(e);
            // break;
            // case 4:
            // update(e);
            // break;
            // case 5:
            // delate(e);
            // break;
            // case 6:
            // count(e);
            // break;
            // case 7:
            // salaryAse(e);
            // break;
            // case 8:
            // highSal(e);
            // break;
            // case 9:
            // minSal(e);
            // break;
            // case 10:
            // exit1(e);
            // break;
        }
    }
    while(choice!=10);
    
    return 0;
}
