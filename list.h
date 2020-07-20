typedef struct
{
	double time;
	char showName[100];
	char day[10];
}showName;

typedef struct LinkedListNode
{
	void* data;
	struct Node *next;
	showName *tvshows;

}LinkedListNode; //

typedef struct

	Node *head;
 	Node *tail;
}LinkedList; //structure of the head and tail of the linked list

void InsertElement(); //this create elements, linkedlist delete elements adn freelinked ard array of struct are refered in the Lecture 6 Struct from lecture 
void (LinkedList*list);
void deleteFirstElement();
void freeLinkedList(LinkedList* list);
void arrayofName(char*arrayshowName[]); //the functions from the file "Linkedlist.c" are stored here in the header file 

