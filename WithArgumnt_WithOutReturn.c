#include <stdio.h>

int sum(int, int);

void main()
{
    int a, b;
    printf("Enter 2 Numbers: ");
    scanf("%d%d", &a, &b);
    sum(a, b);
}

int sum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("result is: %d", result);
}
