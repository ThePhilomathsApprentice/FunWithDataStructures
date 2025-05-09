#include "myheader.h"

void dispHighLow(EMP **headPtr){

    EMP *empTrav = *headPtr; /*We'll Use this to Traverse Linked List \
    to find the employee with the Highest and Lowest Salary. */

    unsigned int high = empTrav->empSal;
    unsigned int low = empTrav->empSal; /* initializing the high and low salary with the 1st Employees' Salary.*/

    EMP *highest=NULL;
    EMP *lowest=NULL;/* We'll save the Node of the Highest and lowest Salary employee in this Pointers. */

    while(empTrav != NULL){
        if((empTrav->empSal) > high){
            high = empTrav->empSal;
            highest = empTrav;
        }
        empTrav = empTrav->next;
    }


    empTrav = *headPtr;
    while(empTrav->next != NULL){
        if(empTrav->empSal <= low){
            low = empTrav->empSal;
            lowest = empTrav;
        }
        empTrav = empTrav->next;
    }


    printf("The Employee with Highest Salary is:\n");
    printf("Employee ID:%d\tEmployee Name:%s\tEmployee Salary:%d\n",highest->empID,highest->empName,highest->empSal); /*Employee Info of Highest Salary Employee.*/

    printf("The Employee with Lowest Salary is:\n");
    printf("Employee ID:%d\tEmployee Name:%s\tEmployee Salary:%d\n",lowest->empID,lowest->empName,lowest->empSal); /*Employee Info of Lowest Salary Employee.*/
}























