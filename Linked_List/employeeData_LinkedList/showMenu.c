#include "myheader.h"

int showMenu(void){
    int choice;
    printf("1.Create an Employee\n2.print Employee Info in reverse.\n3.Print Employee with Highest Salary and Lowest Salary.\n0.EXIT");
    scanf("%d",&choice);
    return choice;
}
