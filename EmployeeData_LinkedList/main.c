
#include "myheader.h"
int main(){
	int choice;
	EMP *head = NULL ;
	while(choice = showMenu()){
		switch(choice){
			case 1:
				createEmp(&head);
				break;
			case 2:
				display(&head);
				break;
			case 3:
				dispHighLow(&head);
				break;
			default:
				printf("Please Give a Valid Choice. Thank You. ;)");
		}
	}
}



