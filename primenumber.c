#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i, flag = 0;
	setbuf(stdout, NULL);
	printf("Enter A Number:");
	scanf("%d", &num);
	for (i = 1; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("its Prime Number!");
	}
	else
	{
		printf("its Non-Prime Number");
	}
	return EXIT_SUCCESS;
}
