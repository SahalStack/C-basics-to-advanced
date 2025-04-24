#include <stdio.h>

int main()
{
    int number = 50;
    int *ptr;

    ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value of ptr (address it holds): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}