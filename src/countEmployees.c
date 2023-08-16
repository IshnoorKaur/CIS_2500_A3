#include "../include/headerA3.h"

//This function counts the number of employees
int countEmployees(a3Emp *headLL)
{

    // to keep the track of the number of employees
    int count = 0;

    a3Emp *current;
    current = headLL;

    // while loop, current is not equal to NULL and goes through the whole list
    while (current != NULL)
    {

        // increments count
        count++;
        // moves to the next employee
        current = current->nextEmployee;
    }

    // return the count to the main
    return count;
}

