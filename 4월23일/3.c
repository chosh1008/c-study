#include <stdio.h>
int main()
{
	
 	int i, j;
 	for(i=-4; i<=4; i++)
 	{
 		for(j=-5; j*j>i*i; j++)
 		{
 			printf("*"); 
 		}
 		printf("\n"); 
 	}
	return 0;
}