#include "../include/headerA3.h"

// This function fire all employees 
void fireAll(a3Emp **headLL)
{
  //Free the current employee
  a3Emp *current;

    // temp node
    a3Emp *temp;
    temp = *headLL;

    int i;

    //Check if the list is NULL
    if (temp == NULL) {
      printf("List is already empty.\n");
      return;
    }

        while (temp != NULL)
        {
            current = temp;

            temp = current->nextEmployee;

            //Free all the dependents of the current employee
            for (i = 0; i < current->numDependents; i++)
            {
                free(current->dependents[i]);
            }
            free(current->dependents);

            // free current employee
            free(current);
        }

        // set head to NULL since the list is now empty
        *headLL = NULL;
        printf("All fired. Linked list is now empty.\n");
}
