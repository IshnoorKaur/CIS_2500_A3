#include "../include/headerA3.h"

// This function views employee's data based on full name
int lookOnFullName(struct employee *headLL, char whichName[100])
{
  //call the current
  struct employee *current;
  current = headLL;

  //a char to store the fullName
  char fullName[100];

  //position for the employee
  int position = 0;

  if (headLL == NULL) {
    printf("The list is empty! \n");
    return -1;
  }

  //current is not Null
  while (current != NULL) {

    //increment the position
    position ++;

    //use strcpy to copy the full name
    strcpy(fullName, current->fname);
    strcat(fullName, " ");
    strcat(fullName, current->lname);

    //split input string into first and last name components
    char inputFirst[50];
    char inputLast[50];
    sscanf(whichName, "%s %s", inputFirst, inputLast);

    //concatenate first and last name components with a single space character
    char inputFullName[100];
    sprintf(inputFullName, "%s %s", inputFirst, inputLast);

    //use strcmp to compare
    if (strcmp(fullName, inputFullName) == 0) {
      return position;
    }

    current = current->nextEmployee;

  }

  return -1;
}
