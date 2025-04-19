#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, limit;
	setbuf(stdout, NULL);
	printf("Enter The Limit Of Row You Want:");
	scanf("%d", &limit);
	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
