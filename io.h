typedef struct
{
	char showName[100];
	char day[10];
	double time;
}Showin; // typedef of struct of the read file are extracted

typedef struct
{
	double time;
 	char showName[100];
}Showout; // // typedef of struct of the write file are inserted

void readfile(char*filename);
void*writefile(char*filename);

