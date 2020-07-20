#include <stdio.h>
#include "list.h"
#include <stdlib.h>



void InsertElement()
{
	
	newNode = (LinkedListNode*)malloc(sizeof(LinkedListNode)); // Create a new node 
	
	(*newNode).data = showName; // "Data" must point to the value to be inserted 
	
	(*newNode).next = head; // "Next" must point to the existing first node
	
	head = newNode; // Now head must point to this new node 
}


void (LinkedList*list)
{
	LinkedListNode *curr= List -> head; // this linkedlist*list are refered in the Test 2 of the Unix and C comp1000 2016 and 2017 in blackboard
	LinkedListNode *curr= (LinkedListNode*)malloc (sizeof(LinkedListNode)); // Create a new node 
	showName *curr -> (showname*)malloc (sizeof(showName)); //size of the name of the shows are inserted in the linked list
	
	curr= Linkedlist-> head; // "Next" must point to the existing first node

	while(curr-> next!=NULL) //a while loop for showing/save the list of shows of the selected day 
	{
	 printf("Tvshows are %s\n", curr-> next-> tvshows-> day);
	 curr= curr ->next;
	}

}


void deleteFirstElement()
{
	temp = head;
	head = (*head).next;
	
	/* Free the first value. Think carefully about whether you actually want to do this! */
	free((*temp).data);

	/* Free the first node. */
	free(temp);
}

void freeLinkedList(LinkedList* list)
{
	LinkedListNode *node, *nextNode; //free each node; then
					//free the main list struct.
	node = (*list).head;
	while(node != NULL) 
		{
		nextNode = (*node).next;
		free((*node).data);
		free(node);
		node = nextNode;
		}
free(list);
//As soon as you free a struct, you lose track of its contents,including any pointers.
}


void arrayofName(char*arrayshowName[]) //the array of struct are refered in the lecturer slide 26 array of struct in the Unix and C Comp1000
{
	while(showNameArray[]!=NULL) //while loop statement so all the data are stored from the linkedlist to arrays. 
	{
	 showNameArray[].time; //array of time 
	 showNameArray[].showName;// array of name of the show
	}
}






