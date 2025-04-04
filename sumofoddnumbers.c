#include<stdio.h>
void main()
{
    int i,limit,sum=0;
    printf("Enter The Limit: ");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
        if(i%2!=0)
        {
            sum+=i;

        }

    }
    printf("Sum of Odd numbers upto %d=%d",limit,sum);

}