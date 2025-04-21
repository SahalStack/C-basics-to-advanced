/*
 ============================================================================
 Name        : star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,space,rows,l,k;
	setbuf(stdout,NULL);
	printf("Enter the Number Of Rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=rows-1;k>=1;k--)
	{
		for(space=1;space<=rows-k;space++)
		{
			printf(" ");
		}
		for(l=1;l<=(2*k-1);l++)
		{
			printf("*");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
