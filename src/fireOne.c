#include "../include/headerA3.h"

//This function fire the nth employee
void fireOne(a3Emp **headLL, int whichOne)
{

    //make 2 nodes on for previous and one for current
    a3Emp *next;
    a3Emp *current;
    current = *headLL;
    whichOne = whichOne -1;
    int i = 0;

    //Check if removing first employee
    if(whichOne == 0) {
      *headLL = current->nextEmployee;

      // Free memory allocated for dependents array of current node
      for (i =0; i < current->numDependents; i++){

        free(current->dependents[i]);

      }
      free(current->dependents);

      // Free memory allocated for current node
      free(current);
      return;
    }

    //This while loop is to remove an employee from the middle or end of the list
    while (i < whichOne -1){

      current = current->nextEmployee;

      i++;
    }

    next = current->nextEmployee->nextEmployee;

    //Free the memory allocated for the dependents array of the next node
    for (i = 0; i< current->nextEmployee->numDependents; i++){

      free(current->nextEmployee->dependents[i]);

    }
    free(current->nextEmployee->dependents);

    //Free memory allocated for the next node
    free(current->nextEmployee);

    //update the current nextEmployee to skip over removed employee (node)
    current->nextEmployee = next;

}
