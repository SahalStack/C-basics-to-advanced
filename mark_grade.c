#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mark;
	setbuf(stdout, NULL);
	printf("Enter Your Mark Here:");
	scanf("%d", &mark);
	if (mark > 90)
		printf("Grade A");
	else if (mark >= 80)
		printf("Grade B");
	else if (mark >= 70)
		printf("Grade c");
	else if (mark >= 60)
		printf("Grade D");
	else if (mark >= 50)
		printf("Grade E");
	else
		printf("Failed Try Again");

	return EXIT_SUCCESS;
}
