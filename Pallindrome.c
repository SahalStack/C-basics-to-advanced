#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[100];
    int length,i,pallindrome=1;
    printf("Enter The Word: ");
    scanf("%s",str);

    length=strlen(str);

    for(i=0;i<length/2;i++)
    {
        if((str[i] )!=(str[length-i-1]))
        {
            pallindrome=0;
            break;

        }
    }
    if(pallindrome)
    {
        printf("%s is a pallindrome.\n",str);
    }
    else
    {
        printf("%s is not a pallindrome.\n",str);
    }
    
    


}