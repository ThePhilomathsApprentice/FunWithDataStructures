#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	
};

class LinkedListMan{
	public:
	LinkedListMan(){

		this->_Head = NULL;

	}
		
	~LinkedListMan(){

		this->_Head = NULL;
		
		
	}
		
		
		
	struct node* findMiddle(){

		int count = 0;
		struct node *_tempNode = _Head; 
		struct node *mid = _tempNode; 
	  
		while ( _tempNode ) 
		{ 

			/* update mid, when 'count' is odd number */
			if (count & 1) 
				mid = mid->next; 


	  
			++count; 
			if(count>10) break;
			_tempNode = _tempNode->next; 
		} 

		return mid;

	}
	
	
	void printLL(){
		printf("newLL:");
		for(struct node *_tempNode= _Head ; _tempNode ; _tempNode = _tempNode->next){
			
			printf("%d ",_tempNode->data);

		}
			printf("\n");
		
		
	}
	

	bool delNode(struct node **_node){
		struct node * _tempNode= _Head;
		
		while( _tempNode->next != (*_node) ){
			_tempNode = _tempNode->next;
			
		}
		_tempNode->next = (*_node)->next;
		free(*_node);
		return true;

	}
	

	bool addNode(struct node **_node){

		if( _Head == NULL ){

			_Head = (*_node);
		}else{

			struct node *_tempNode;
			_tempNode = _Head;
			
			while( _tempNode->next ){
				_tempNode = _tempNode->next;
			}
			_tempNode->next = *_node;
			
		}
		return true;



	}



	private:
	struct node* _Head;
		
		
};

int main(){

	int T;
	scanf("%d",&T); //Number of total TestCases.

	for( int i=0 ; i<T ; ++i ){
		int size;
		scanf("%d",&size); //size of the array.

		//Make Linked List according to the data.
		LinkedListMan* LL= NULL;
		LL = new LinkedListMan();//&Head
		if(LL == NULL ){

			printf("Case %d: ",i); 
			printf("FAIL: main():new LinkedListMan.\n");

			continue;
			
		}
		
		for( int j=0 ; j<size ; ++j){

			//Add node to Linked List.
			struct node* _node;
			_node = (struct node*)malloc( sizeof( struct node ));
			if(_node == NULL ){
				printf("FAILED _node malloc\n");
				
			}


			_node->next = NULL;
			scanf("%d",&(_node->data)); //size of the array.

			bool success = LL->addNode(&_node);
			if( success == false ){
				printf("FAIL: main(): LL.addNode()::data=%d \n",_node->data);
				continue;
			}
			

		}

		struct node* _midNode = LL->findMiddle();
		printf("Case %d: %d \n",i,_midNode->data); 
		
		//printf("Deleting Middle.\n");
		bool sucess = LL->delNode(&_midNode);
		LL->printLL();

		delete LL;
		LL = NULL;

	}

    return 0; 

}
