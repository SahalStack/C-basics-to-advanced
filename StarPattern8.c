#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,rows;
	setbuf(stdout,NULL);
	printf("Enter the Number Of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
