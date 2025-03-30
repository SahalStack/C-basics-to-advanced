#include<stdio.h>

void main()
{
    int i,number;
    printf("Enter The Integer: ");
    scanf("%d",&number);

    printf("Multiplication table of %d is\n",number);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",i,number,number*i);
    }

}
