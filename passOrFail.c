#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter Your Mark Here:");
	scanf("%f",&mark);
	if(mark>50)
		printf("CONGRATULATIONS!,You Are PASSED :)");
	else
		printf("SORRY!,You Are FAILED :(");

	return EXIT_SUCCESS;
}
