#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,values[3][3];
    printf("Enter The Values: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&values[i][j]);
        }
    }
        printf("Entered Values Are:\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",values[i][j]);
        }
        printf("\n");
    }
    

}