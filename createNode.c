#include "myheader.h"
#include<stdlib.h>

EMP *createNode(void){
	EMP *node = (EMP *) malloc( sizeof(EMP)); /* Dynamic memory request of size struct employee aka EMP */
	return node;
}

