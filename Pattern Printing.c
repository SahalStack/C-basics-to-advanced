/*
 ============================================================================
 Name        : Pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r,i,j;
	setbuf(stdout,NULL);
	printf("Enter The Row You Want:");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=0;j<i;j++)
		{
			printf("+  ");
	}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
