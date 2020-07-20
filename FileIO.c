#include<stdio.h>
#include<stdlib.h>

#include"io.h"

void readfile(char*filename)
{
	FILE *fptr;
	fptr = fopen("test.txt", "r"); //here the file io for read the file in the test.txt

	Showin* showin = (Showin*)malloc(sizeof(Showin)); //add the size of the all the day, name of the show, time in the text.txt

	if(fptr==NULL)
	{
	 fprintf(stderr,"File cannot be found\n");
	 exit(1); //if the file is not present, then the error shows in the UI
	}

	else
	{

   	 fgets(showin->showName, 100, fptr);
   	 printf("1: %s\n", showin->showName); //here display in the UI of name of the shows
   
   	 fscanf(fptr,"%s", showin->day);
   	 printf("2: %s\n", showin->day); //here display in the UI of the day of the week

	 fscanf(fptr, "%d",showin->time);
   	 printf("%d\n", showin->timeM); //here display in the UI of time
   	 
	}

	fclose(fptr); //close the file pointer of the 
	
}

void*writefile(char*filename)
{
	FILE *fptr;
	fptr = fopen("textout.txt", "w"); ////here the file io for write the file in the test.txt

	Showout* sout = (Showout*)malloc(sizeof(Showout));  //add the size of the all the day, name of the show, time in the textout.txt
	
	if(fptr==NULL)
	{
	 fprintf(stderr,"File cannot be found\n"); //same thing if the file is not present, then the error shows in the UI
	 exit(1);
	}

	else
	{
	 fprintf("%d", sout->time);
	 fscanf(fptr, "%d", sout->time); //here output/insert in the selected text file of time 
	 
	 fprintf("1: %s\n", sout->showName);
	 fscanf(sout->showName, 100, fptr);//here output/insert in the selected text file of name of the shows
	 
	}
	
	fclose(fptr); //close the file pointer of the write
}
	
// the file i/0 is been refered both online the link here: https://www.tutorialspoint.com/cprogramming/c_file_io.htm and also in the UCP test2 Question 4 filei/o COMP1000 2017 and 2016 in our university blackbord 

