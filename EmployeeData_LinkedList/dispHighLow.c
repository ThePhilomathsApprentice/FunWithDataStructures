#include "myheader.h"

void dispHighLow(EMP **headPtr){

	EMP *empHigh = *headPtr; /*We'll Use this to Traverse Linked List to find the employee with the Highest Salary. */

	EMP *empLow = *headPtr; /*We'll Use this to Traverse Linked List to find the employee with the Lowest Salary. */

	unsigned int high = empHigh->empSal;
	unsigned int low = empLow->empSal; /* initializing the basic high and lows.*/
	
	EMP *highest=NULL;
	EMP *lowest=NULL;/* We'll save the Node of the Highest and lowest Salary employee in this Pointers. */ 
	
	while(empHigh != NULL){
		if((empHigh->empSal) > high){
			high = empHigh->empSal;
			highest = empHigh;					
		}
		empHigh = empHigh->next;	
	} 


	empLow = *headPtr;
	while(empLow->next != NULL){
		if(empLow->empSal <= low){
			low = empLow->empSal;
			lowest = empLow;					
		}
		empLow = empLow->next;	
	}
	
	
	printf("The Employee with Highest Salary is:\n");
	printf("Employee ID:%d\tEmployee Name:%s\tEmployee Salary:%d\n",highest->empID,highest->empName,highest->empSal); /*Employee Info of Highest Salary Employee.*/

	printf("The Employee with Lowest Salary is:\n");
	printf("Employee ID:%d\tEmployee Name:%s\tEmployee Salary:%d\n",lowest->empID,lowest->empName,lowest->empSal); /*Employee Info of Lowest Salary Employee.*/
}























