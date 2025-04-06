#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter Any Two Numbers: ");
    scanf("%d%d",&a,&b);

    printf("before swaping:\n");
    printf("a=%d\nb=%d\n",a,b);


    temp=a;
    a=b;
    b=temp;

    printf("after Swaping:\na=%d\nb=%d\n",a,b);
}

