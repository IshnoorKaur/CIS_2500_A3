#include "../include/headerA3.h"

//This function sorts the employee data in ascending order of empId
void sortEmployeesId(struct employee *headLL) {

  //call a current to keep track of the employees
  a3Emp temp;
  a3Emp *current = headLL;
  a3Emp *next = NULL;

  //if head is NULL
  if (headLL == NULL) {

    printf("The list is empty! \n");

  }

    //while the current employee is not NULL
    while (current != NULL) {

      //next is current nextEmployee
      next = current->nextEmployee;

      //while next is not NULL
      while (next != NULL) {

        //if currentId is greater than nextId
        if (current->empId > next->empId) {

          //Temp to current
          //use strcpy to copy the current fname to the temp
          strcpy(temp.fname, current->fname);
          //use strcpy to copy the current lname to the temp
          strcpy(temp.lname, current->lname);

          //have temp empID equal the current id
          temp.empId = current->empId;

          //temp = current for the dependents and numDependents
          temp.numDependents = current->numDependents;
          temp.dependents = current->dependents;

          //Current to next
          //use strcpy to copy the current fname to the temp
          strcpy(current->fname, next->fname);
          //use strcpy to copy the current lname to the temp
          strcpy(current->lname, next->lname);

          //have temp empID equal the current id
          current->empId = next->empId;

          //temp = current for the dependents and numDependents
          current->numDependents = next->numDependents;
          current->dependents = next->dependents;

          //Next to temp
          //use strcpy to copy the current fname to the temp
          strcpy(next->fname, temp.fname);
          //use strcpy to copy the current lname to the temp
          strcpy(next->lname, temp.lname);

          //have temp empID equal the current id
          next->empId = temp.empId;

          //temp = current for the dependents and numDependents
          next->numDependents = temp.numDependents;
          next->dependents = temp.dependents;

        }
        next = next->nextEmployee;
      }
      //move to the next employee
      current = current->nextEmployee;
    }
      //print the list
      printf("After sorting on empId, the employees are as follows: \n");
      printAll(headLL);
}
