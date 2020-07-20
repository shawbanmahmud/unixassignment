#include <stdio.h>
#include <stdlib.h>
#include "comparison.h" //use qsort() to arrange the struct in the array according to order (in terms of time or name)

order list [15]; //here shows there are 15 shows a day so therefore there are 105 shows in a week

int comparetime(const void*a, const void *b) //making a function of compare or sort for time 
{
	order*orderA =(order*)a;
	order*orderB =(order*)b;
	
	return(orderA->time[100]-orderB->time[100]); 
}

int compareShowName(const void *c, const void *d) //making a function of compare or sort for name of the show
{
	order*orderC =(order*)c;
	order*orderd =(order*)d;
	
	return(orderc->showName[]-orderd->showName[]);
} 

//this example of the qsort comparison is been refered in the qscort example in the moodle that is also attached in the zipfile for references in qsort_1 and qsort_2 also refered online https://stackoverflow.com/questions/46186138/how-to-use-qsort-in-an-array-structure-in-c-language?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
