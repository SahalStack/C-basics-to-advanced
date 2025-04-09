#include <stdio.h>
int add(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = add(num1, num2);

    printf("The sum is: %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
