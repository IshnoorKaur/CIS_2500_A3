#include "../include/headerA3.h"

// This function prints the data of all employees currently in the LL
void printAll(struct employee *headLL)
{

    int count = 0;
    struct employee *temp;
    temp = headLL;

    if (temp == NULL)
    {
        printf("Currently, there are 0 employees\n");
        return;
    }
    while (temp != NULL)
    {
        printf("\n");
        count++;
        printf("Employee # %d:\n", count);
        printf("Employee id: %d\n", temp->empId);
        printf("First name: %s\n", temp->fname);
        printf("Last name: %s\n", temp->lname);
        printf("Dependents [%d]: ", temp->numDependents);
        for (int i = 0; i < temp->numDependents; i++)
        {
            printf("%s", temp->dependents[i]);
            if (i != temp->numDependents - 1)
                printf(", ");
        }
        printf("\n");

        //check if the nextEmployee is NULL
        if (temp->nextEmployee == NULL){
          printf("End of employee list.\n");
          break;
        }
        else {
          temp = temp->nextEmployee;
        }
    }
    printf("\n");
    printf("Currently, there are %d employees\n", count);

}
