#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;

};


struct node* addNode( struct node** _head, struct node* _node ){

    struct node* _tempHeadPtr = (*_head);

    if( (*_head) == NULL ){

	(*_head) = _node;
	return (*_head);

    }

    while( _tempHeadPtr->next != NULL ){
	_tempHeadPtr = _tempHeadPtr->next;

	}
	if (_tempHeadPtr->next == NULL ){
	    _tempHeadPtr->next = _node;

	    return (*_head);
	    }else{

	    return (*_head);

		}


}

struct node* addNodeBeg( struct node** _head, struct node* _node ){

    if( (*_head) == NULL ){

	(*_head) = _node;
	return (*_head);
    }else{

	_node->next = (*_head);
	(*_head) = _node;

	return (*_head);

    }


}

void traverseLL(  struct node* _head ){
    struct node* _tempHeadPtr = _head;
    printf("++++Traversing Start:: ++++\n");

    for(  ; _tempHeadPtr != NULL ;  _tempHeadPtr = _tempHeadPtr->next){
	printf("%d ", _tempHeadPtr->data );

    }

    printf("\n++++Traversing End ++++\n");

}

void deleteLL(  struct node* _head ){

    struct node* _tempHeadPtr = _head;
    struct node* _nextHeadPtr = _head;

    while( _tempHeadPtr != NULL ){
	_nextHeadPtr = _tempHeadPtr->next;
	free(_tempHeadPtr);
	_tempHeadPtr = _nextHeadPtr;

    }


}

int main(){

//Generate a  Linked List from the testInput.txt file.
	int T;
	scanf("%d",&T); //Number of total TestCases.

	printf("TestCases: %d\n", T);

	for( int i=0 ; i<T ; ++i ){
	    //make 2 Linked Lists.
	    struct node* head_1 = NULL ;
	    struct node* head_2 = NULL ;
	    int size_1;
	    scanf("%d",&size_1); //size of the Linked List.
	    printf("size_1:: %d\n", size_1);

	    for( int j=0 ; j<size_1 ; ++j){
		//Add node to Linked List.
		struct node* _node = NULL;
		_node = (struct node*)malloc( sizeof( struct node ));
		if(_node == NULL ){
			printf("FAILED _node malloc\n");
		}

		_node->next = NULL;
		scanf("%d",&(_node->data)); //size of the array.
		printf("_node->data:: %d\n", (_node->data));

		struct node*  success = addNode(&head_1, _node);
		if( success == NULL ){
			printf("FAILED: main(): LL.addNode()::data=%d \n",_node->data);
			continue;
		}

	    }

	    int size_2;
	    scanf("%d",&size_2); //size of the Linked List.
	    printf("size_2:: %d\n", size_2);

	    for( int j=0 ; j<size_2 ; ++j){
		//Add node to Linked List.
		struct node* _node = NULL;
		_node = (struct node*)malloc( sizeof( struct node ));
		if(_node == NULL ){
			printf("FAILED _node malloc\n");
		}

		_node->next = NULL;
		scanf("%d",&(_node->data)); //size of the array.
		printf("_node->data:: %d\n", (_node->data));

		struct node* success = addNode(&head_2, _node);
		if( success == NULL ){
			printf("FAIL: main(): LL.addNode()::data=%d \n",_node->data);
			continue;
		}

	    }

	    traverseLL(head_1);
	    traverseLL(head_2);


	    /*++++++++++ ACTUAL LOGIC START ++++++++++*/
	    struct node* head_3 = NULL ;
	    int num_1=0;
	    //Traverse LL 1 and generate the number
	    struct node* tempNodePtr_1 = head_1;
	    for( ; tempNodePtr_1 != NULL ; tempNodePtr_1 = tempNodePtr_1->next ){
		num_1 = (num_1 * 10) + tempNodePtr_1->data;

	    }
	    printf("num_1:: %d\n", num_1);




	    int num_2=0;
	    //Traverse LL 2 and generate the number
	    struct node* tempNodePtr_2 = head_2;
	    for( ; tempNodePtr_2 != NULL ; tempNodePtr_2 = tempNodePtr_2->next ){
		num_2 = (num_2 * 10) + tempNodePtr_2->data;

	    }
	    printf("num_2:: %d\n", num_2);



	    int num_3 = num_1 + num_2;
	    printf("num_3:: %d\n", num_3);


	    //create LL 3
	    for(  ;  num_3 != 0 ;   ){
		//Add node to Linked List.
		struct node* _node = NULL;
		_node = (struct node*)malloc( sizeof( struct node ));
		if(_node == NULL ){
			printf("FAILED _node malloc\n");
		}

		_node->next = NULL;
		(_node->data) = (num_3%10);
		num_3 = (num_3/10);
		printf("_node->data:: %d\n", (_node->data));
		printf("num_3:: %d\n", num_3);

		struct node*  success = addNodeBeg(&head_3, _node);
		if( success == NULL ){
			printf("FAILED: main(): LL.addNode()::data=%d \n",_node->data);
			continue;
		}

	    }

    	    traverseLL(head_3);



	    /*++++++++++ ACTUAL LOGIC END ++++++++++*/

	    deleteLL(head_1);
	    deleteLL(head_2);
	    deleteLL(head_3);

	}

    return 0;

}
