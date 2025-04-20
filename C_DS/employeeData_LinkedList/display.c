#include "myheader.h"

void display(EMP **headPtr){
    EMP *trav = *headPtr;
    printf("The Entered Employees in the reverse Order are as follows:\n");

    while(trav->next != NULL){
        printf("Employee ID: %d\tEmployee Name:%s\tEmployee Salary:%d\n", trav->empID,trav->empName,trav->empSal);
        trav = trav->next;
    }/* print all the Employee Information except the last Employee.*/

    printf("Employee ID: %d\tEmployee Name:%s\tEmployee Salary:%d\n", trav->empID,trav->empName,trav->empSal); /* print the last Employee Information*/
}

