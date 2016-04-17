#include <stdio.h>
#include <string.h>

void output(char*,char*);

int main()
{
	char lastname[100];
	char firstname[100];
	printf("성:");
	scanf("%s",lastname);
	printf("이름:");
	scanf("%s",firstname);
	output(lastname,firstname);
	return 0;
}
void output(char* lastname,char *firstname)
{
	printf("\"%s %s\"\n",lastname,firstname);
	printf("\"%*d %*d\"\n",strlen(lastname),strlen(lastname),strlen(firstname),strlen(firstname));
}