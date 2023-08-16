#include "../include/headerA3.h"

int main (int argc, char *argv[]){

	//head
	struct employee * headA3 = NULL;

	//user choice 1-10
	int choice = 0;

	//position number for fun 3
	int whichOne;

	//employee ID for fun 4
	int whichEmpId;
	int position; //the returned value from the function

	//name for fun 5
	char whichName[100];
	int posName;	//returned value from the function

	//total number of employees for fun 6
	int numOfEmp;

	//the id of the employee to fire for fun 8
	int firePos;

	//choice for firing all the employees fun 9
	char fun9;

	//call loadEmployees
	loadEmpData(&headA3, "proFile.txt");
	printf("Data is loaded!\n");
	printf("\n");


while (choice != 10) {

		//The following gives the user a choice for 1 - 10
		printf("Here is the menu \n");
		printf("1. Add a new employee \n");
		printf("2. Print data of all employees \n");
		printf("3. Print data of the nth employee \n");
		printf("4. Search for employee based on empId \n");
		printf("5. Search for employee based on full name \n");
		printf("6. Count the total number of employees \n");
		printf("7. Sort the employees based on their empId \n");
		printf("8. Remove the nth employee in the current LL \n");
		printf("9. Remove all employees in the current LL \n");
		printf("10. Exit \n");

		//Print and scanf the user choice
		printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

        if (choice == 1){
					//Call fun 1
					printf("Function 1 \n");
					recruitEmployee(&headA3);
					printf("Function 1 is done!\n");
					printf("\n");
        }

				if (choice == 2){
					//call fun 2 print function
					printf("This function prints information: \n");
					printAll(headA3);
					printf("Fun 2 done\n");
					printf("\n");
				}

				if (choice == 3) {
					//call fun 3
					printf("This function prints data at n position.\n");
					printf("Enter a position: ");
					scanf("%d", &whichOne);
					printf("\n");
					printOne(headA3, whichOne);
					printf("Fun 3 done\n");
					printf("\n");
				}

				if (choice == 4) {
					//call fun 4
					printf("This function prints data of the employee using their ID.\n");
					printf("Enter an employee ID: ");
					scanf("%d", &whichEmpId);
					position = lookOnId(headA3, whichEmpId);
					printf("The position returned is %d\n", position);
					printf("\n");
					if (position == -1) {
						printf("Employee not found!\n");
					} else {
						//call the printOne fun to print info of the employee
						printOne(headA3, position);
					}
					printf("Fun 4 is done\n");
					printf("\n");
				}

				if (choice == 5) {
					//call fun 5
					printf("This function prints data of the employee using their full name.\n");
					printf("Enter the full name of the employee: ");
					scanf(" %[^\n]%*c", whichName);
					posName = lookOnFullName(headA3, whichName);
					printf("The position returned is %d\n", posName);
					printf("\n");
					if (posName == -1) {
						printf("Employee not found!\n");
					} else {
						//call the printOne fun to print info of the employee
						printOne(headA3, posName);
					}
					printf("Fun 5 is done\n");
					printf("\n");
				}

				if (choice == 6){
					//call fun 6
					printf("This function prints the total number of employees.\n");
					numOfEmp = countEmployees(headA3);
					printf("Total number of employees = %d \n", numOfEmp);
					printf("Fun 6 is done!\n");
					printf("\n");
				}

				if (choice == 7){
					//call fun 7
					printf("This function sort employee data in ascending order of empId.\n");
					sortEmployeesId(headA3);
					printf("Fun 7 is done\n");
					printf("\n");
				}

				if (choice == 8) {
					//call fun 8
					printf("This function fire's one employee. \n");
					numOfEmp = countEmployees(headA3);
					//use fun 6 to get the total number of employees - numOfEmp
					printf("Currently there are %d employees.\n", numOfEmp);
						printf("Which employee do you wish to fire – enter a value between 1 and %d: ", numOfEmp);
						scanf("%d", &firePos);
						fireOne(&headA3, firePos);
					printf("Fun 8 is done\n");
					printf("\n");
				}

				if (choice == 9){
					//call fun 9
					printf("This function fires all employees.\n");
					// Print statement and scanf the user's answer
					printf("Are you sure you want to fire everyone: ");
					scanf(" %c", &fun9);
					if (fun9 == 'y' || fun9 == 'Y'){
						fireAll(&headA3);
					} else {
						printf("No employee was fired.\n");
					}
					printf("Fun 9 is done!\n");

					printf("\n");
				}

				if (choice == 10) {
					printf("Exit the program.\n");
					fireAll(&headA3);
					return 0;
				}

				//User has enterd an invalid choice
				if (choice >= 11 || 0 >= choice) {
					printf("Invalid choice!\n");
					printf("\n");
				}
		}

}
