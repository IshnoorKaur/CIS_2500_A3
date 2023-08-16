#include "../include/headerA3.h"

//This function views employee's data based on empId
int lookOnId(struct employee *headLL, int whichEmpId) {

    //make a node
    struct employee *current;
    current = headLL;

    //To keep track of the employee's position
    int position = 0;

    //if the current position is null
    while(current != NULL) {

      //increment the position as we move to the next employee
      position++;
      
        //The current ID is the same as whichEmpId
        if(current->empId == whichEmpId) {

            //return the position of the employee
            return position;
        }

        //move to the next employee
        current = current->nextEmployee;

    }
    // employee with given empId not found
    return -1;
}
