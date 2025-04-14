#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, choice, result;
	setbuf(stdout, NULL);
	printf("Enter Two Numbers:");
	scanf("%d%d", &num1, &num2);
	printf("1 For Addition \n2 For Subtraction \n3 For Multiplication \n4 For Division");
	scanf("%d", &choice);
	if (choice == 1)
	{
		result = num1 + num2;
	}
	else if (choice == 2)
	{
		result = num1 - num2;
	}
	else if (choice == 3)
	{
		result = num1 * num2;
	}
	else if (choice == 4)
	{
		result = num1 / num2;
	}
	else
	{
		printf("YOU ARE A FOOL :");
	}
	printf("result=%d", result);

	return EXIT_SUCCESS;
}
