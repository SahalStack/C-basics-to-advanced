#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("enter the number of rows:");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}