#include <stdio.h>
int Sum()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = a + b;
    return sum;
}

int main()
{
    int result;
    result = Sum();
    printf("The sum is: %d\n", result);

    return 0;
}
