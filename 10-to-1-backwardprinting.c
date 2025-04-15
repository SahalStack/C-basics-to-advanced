#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	setbuf(stdout, NULL);
	for (i = 10; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}
