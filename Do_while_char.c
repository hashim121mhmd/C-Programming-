#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char c;
do
{
printf("Enter a number\n");
scanf("%d",&a);
if(a%2)
{
    printf("%d number is odd",a);
}
else
    {
        printf("%d Number is even",a);

}
lab:
printf("\nDo you want to continue y/n : ");
scanf(" %c",&c);
if(c!='y' && c!='n')
{
printf("Wrong input \nTry again!!!");
goto lab;
}
}while(c=='y');
getch();
}
