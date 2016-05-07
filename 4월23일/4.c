#include <stdio.h>
#include <math.h>

int main()
{
 	int i, j, n=-2;
 	for(i=-4; i<=4; i=i+2)
 	{ 

 		printf("%*c",abs(n)+1, ' ');
 		n++;
 		for(j=-5; j*j>i*i; j++)
 		{
 			printf("*");
 		}
 		printf("\n"); 
 	}
	return 0;
}