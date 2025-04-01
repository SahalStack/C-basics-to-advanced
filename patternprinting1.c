#include<stdio.h>
void main()
{
    int i,j,rows,col;
    printf("Enter the No. Of Rows:");
    scanf("%d",&rows);
    printf("Enter the No. Of Columns: ");
    scanf("%d",&col);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}