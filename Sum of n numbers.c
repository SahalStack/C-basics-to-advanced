#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Result=%d",sum);
	return EXIT_SUCCESS;
}
