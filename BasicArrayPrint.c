#include <stdio.h>

int main(void)
{
	int a[10], i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i * 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
