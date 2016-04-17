#include <stdio.h>
#include <string.h>

char input();
void output(char *);

int main()
{
	char name[100];
	printf("name:");
	scanf("%s",name);
	output(name);
	return 0;
}
void output(char *name)
{
	printf("\"%s\"\n",name);
	printf("\"%*s\"\n",strlen(name)+strlen(name)/2,name);
	printf("\"%-*s\"\n",strlen(name)+strlen(name)/2,name);	
}