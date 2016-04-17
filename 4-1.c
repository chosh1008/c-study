#include <stdio.h>
#include <string.h>
int main()
{
	char ary[100];
	char ary2[100];
	printf("성:");
	scanf("%s",ary);
	printf("이름:");
	scanf("%s",ary2);
	printf("\"%s %s\"\n",ary,ary2);
	printf("\"%*d %*d\"\n",strlen(ary),strlen(ary),strlen(ary2),strlen(ary2));
	return 0;
}