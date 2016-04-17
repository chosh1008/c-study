#include <stdio.h>
int input();
void output(char);

int main()
{
	int num=input(num);
	output(num);
	return 0;
}

int input()
{
	int num;
	scanf("%d",&num);
	return num;
}

void output(char a)
{
	printf("%c\n",a);
}