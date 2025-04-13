#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int choice;
	setbuf(stdout, NULL);
	printf("1 For Porootta \n2 For Mandhi \n3 For Biriyani \n4 For Noodles \nEnter Your Choice:");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("You have selected Porotta");
		break;
	case 2:
		printf("You have Selected Mandhi");
		break;
	case 3:
		printf("You have Selected Biriyani");
		break;
	case 4:
		printf("You have Selected Noodles");
		break;
	default:
		printf("Invalid Option");
	}

	return EXIT_SUCCESS;
}
