typedef struct
{
	double time;
	char showName[100];
}order;

int comparetime(const void*a, const void *b);
int compareShowName(const void *c, const void *d);
