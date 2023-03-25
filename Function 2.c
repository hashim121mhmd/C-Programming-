#include<stdio.h>
#include<conio.h>
void sum(int,int);

void main()
{
    int num=234,num1=456;
   /* printf("Enter first Number : ");
    scanf("%d",&num);
    printf("Enter Second Number : ");
    scanf("%d",&num1);*/
    sum(num,num1);
    printf("\n num is %d",num);
     printf("\n num1 is %d",num1);
    getch();
}

void sum(int num,int num1)
{
    num=156;
    num1=135;
    printf("\n a= %d",num);
    printf("\n b= %d",num1);
}
