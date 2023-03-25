#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char c,d;
do
{
printf("\nEnter a Number : ");
scanf("%d",&a);
if(a%2)
{
printf("%d is odd",a);
}
else
{
printf("%d is Even",a);
}

printf("Do you want to continue \? 1/0  ");
scanf("%d",&c);
printf("%d",c);
if(c!=1&& c!=0)
{
printf("Wrong Input Try again!!! \n");
goto q123;
}
}while(c==1);
q123:
getch();
}
