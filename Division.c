#include<stdio.h>
void main()
{
    int remainder,qoutient,divisor,divident;
    printf("Enter divident: ");
    scanf("%d",&divident);
    printf("Enter divisor: ");
    scanf("%d",&divisor);

    qoutient=divident/divisor;
    remainder=divident%divisor;

    printf("qoutient= %d\n",qoutient);
    printf("remainder= %d\n",remainder);
}
