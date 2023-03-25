#include<stdio.h>
#include<conio.h>
void sum(void);

void main()
{
sum();
}

void sum(void)
{
    int num,num1;
    printf("Enter first Number : ");
    scanf("%d",&num);
    printf("Enter Second Number : ");
    scanf("%d",&num1);
    printf("\n Sum is %d",num+num1);
}
