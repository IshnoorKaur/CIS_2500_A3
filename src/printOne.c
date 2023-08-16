#include "../include/headerA3.h"

// This function print employee data at position n in the LL
void printOne(struct employee *headLL, int whichOne)
{
    struct employee *currEmp;
    currEmp = headLL;

    int i;
    int count = 0;

    // If the head is empty
    if (currEmp == NULL)
    {
        printf("The linked list is empty\n");
        return;
    }

    //The currEmp is not null and the count is less than whichOne
    while (currEmp != NULL)
    {
        count++;

      // Print statements
      if (count == whichOne) {
        printf("Employee id: %d\n", currEmp->empId);
        printf("First name: %s\n", currEmp->fname);
        printf("Last name: %s\n", currEmp->lname);
        printf("Dependents: ");

        // Print the dependents
        for (i = 0; i < currEmp->numDependents; i++)
        {
          printf("%s", currEmp->dependents[i]);
          if (i != currEmp->numDependents - 1)
          printf(", ");
        }
        printf("\n");
        return;

      }
      currEmp = currEmp -> nextEmployee;

    }
    // If the requested position was not found
    printf("No employee at this position.\n");
    printf("\n");
}
