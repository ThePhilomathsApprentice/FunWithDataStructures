#include "myheader.h"


void createEmp(EMP **headPtr){
    EMP *emp= createNode();

    /*initializing the Node with the Values given by the User.*/
    printf("Give the Employee ID of the Employee You want to add.");
    scanf("%d",&emp->empID);
    __fpurge(stdin);
    printf("Give the Name of the Employee You want to add.");
    fgets(emp->empName,sizeof(emp->empName),stdin);
    printf("Give the Salary of the Employee You want to add.");
    scanf("%d",&emp->empSal);

    /*Connecting the node to the Original Array.*/
    if(*headPtr == NULL){
    *headPtr = emp;
    emp->next = NULL;
    }
    else{
    emp->next = *headPtr;
    *headPtr = emp;
    }

}
