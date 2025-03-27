#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter An Integer:");
    scanf("%d",&num);

    if(num==0)
    {
        printf("the entered number is not even nor odd!");

    }

    else if(num%2==0)
    {
        printf("the entered number is EVEN!");
    }
    else if(num<1)
    {
        printf("Please enter the positive integer...FOOL!");
    }
    else
    {
        printf("the entered number is ODD!");

    }
}