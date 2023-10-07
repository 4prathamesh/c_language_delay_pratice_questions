/*
write a menudrive program that the depict the working of library
the manu option should be
1. add book information. 
2. display book information. 
3. list all book of given outhor. 
4. list the title of specificed book. 
5. list the count of book in the library. 
6. list of the book in the order of accession number. 
7. exit. 
create a structer called library the holed accession number, tital of book, outhar name
price of the book and flag is indecate weather book is issude or not.
*/

#include<stdio.h>
#include<string.h>
struct library
{
    char tital[200],outname[200];
    int price,accessNo;
};
struct library lib[3];
int main()
{
    // only print all case
    printf("1.add book information\n");
    printf("2.display book information\n");
    printf("3.list all book of given outhor\n");
    printf("4.list the title of specificed book\n");
    printf("5.list the count of book in the library\n");
    printf("6.list of the book in the order of accession number\n");
    printf("7.exit\n");

    // choice any option
    int choice,count=0;
    char s[10];

    // switch case
    int i=0,j;
    do{
        printf("\nyour choice\n");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        for(;i<3;i++)
        {
            _flushall();
            printf("enter the book Title:\n");
            gets(lib[i].tital);
            printf("enter the book Author Name:\n");
            gets(lib[i].outname); 
            printf("enter book number:\n");
            scanf("%d",&lib[i].accessNo);
            printf("enter the book Price:\n");
            scanf("%d",&lib[i].price);
            count++;
        }
        break;

        case 2:
        for(i=0;i<3;i++)
        {
            printf("%d\n%s\n%s\n%d\n",lib[i].accessNo,lib[i].tital,lib[i].outname,lib[i].price);
            printf("\n");
        }
        break;

        case 3:
        printf("enter outhor name:\n");
        scanf("%s",&s);
        for(i=0;i<3;i++)
        {
            if(strcmp(lib[i].outname,s)==0)
            {
                printf("%s\n",lib[i].tital);
            }
        }
        break;

        case 4:
        
        printf("enter the specificed book\n");
        scanf("%s",&s);
        for(i=0;i<3;i++)
        {
            if(strcmp(lib[i].tital,s)==0)
            {
                printf("%d\n%s\n%d\n",lib[i].accessNo,lib[i].outname,lib[i].price);
            }
        }
        break;
        // list the count of book in the library
        case 5:
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(lib[i].accessNo==lib[j].accessNo)
                {
                    count--;
                }
            }
        }
        printf("\nnumber of book in library:%d",count);
        break;
        
        // list of the book in the order of accession number
        case 6:
        // sort string
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(lib[i].accessNo>lib[j].accessNo)
                {
                    int temp=lib[j].accessNo;
                    lib[j].accessNo=lib[i].accessNo;
                    lib[i].accessNo=temp;
                }
            }
        }
        // print string
        for(i=0;i<3;i++)
        {
            printf("%d\n%s\n%s\n%d\n",lib[i].accessNo,lib[i].tital,lib[i].outname,lib[i].price);
            printf("\n");
        }
        break;
        case 7:
        printf("exit");
        break;


    }
    } while(choice!=7);
    return 0;
}