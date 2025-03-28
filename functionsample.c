#include<stdio.h>
#include<conio.h>
void sum();
void main()

{
    sum();

}

  void sum()
{
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of Two Numbers is:%d",c);
}