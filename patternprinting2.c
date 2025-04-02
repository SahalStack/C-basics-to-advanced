
#include <stdio.h>

int main()
 {
    int i, j;
    int rows = 5; 

    for (i=0;i<rows;i++)
     {
        if (i%2==0) 
        { 
            for (j = 0; j < 5; j++)
             { 
                printf("1");
            }
        } 
        else 
        {
            for (j = 0; j < 5; j++)
             { 
                printf("0");
            }
        }
        printf("\n"); 
    }

    return 0;
}
