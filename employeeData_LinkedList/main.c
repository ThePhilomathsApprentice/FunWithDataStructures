
#include "myheader.h"
int main(){
	int choice;
	EMP *head = NULL ;
	while(choice = showMenu()){
		switch(choice){
			case 1:
				printf("Create Employee Chosen. Thank You. ;)");
				createEmp(&head);
				break;
			case 2:
				printf("Display Employees Chosen. Thank You. ;)");
				display(&head);
				break;
			case 3:
				printf("Display Employee with highest and lowest salary chosen. Thank You. ;)");
				dispHighLow(&head);
				break;
			default:
				printf("Please Give a Valid Choice. Thank You. ;)");
		}
	}
}



