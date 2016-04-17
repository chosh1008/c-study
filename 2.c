#include <stdio.h>
int input();
void output(int ,int);

int main()
{
	int day1=input(day1),week,day2;
	week=day1/7;
	day2=day1%7;
	output(week,day2);
	return 0;
}

int input()
{
	int day1;
	scanf("%d",&day1);
	return day1;
}

void output(int a,int b)
{
	printf("%d주 %d일",a,b);
}