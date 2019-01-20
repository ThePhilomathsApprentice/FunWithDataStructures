
typedef struct employee{
	int empID;
	char empName[30];
	int empSal;
	struct employee *next;
}EMP;

void display(EMP **);
void dispHighLow(EMP **);

int showMenu(void);
void createEmp(EMP **);
EMP *createNode(void);


