#include <stdio.h>
#include <string.h>

int main()
{
	char ary[100];
	scanf("%s",ary);
	printf("\"%s\"\n",ary);
	printf("\"%*s\"\n",strlen(ary)+strlen(ary)/2,ary);
	printf("\"%-*s\"\n",strlen(ary)+strlen(ary)/2,ary);	
	return 0;
}