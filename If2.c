#include <stdio.h>
#include <conio.h>
void main()
{
int a; //initializing
printf("Enter a Number\n");
scanf("%d",&a);
if(a%3==0)
{
    printf("Number %d is divisible by 3\n",a);
}
if(a%4==0)
{
    printf("Number %d is divisible by 4\n",a);
}
if(a%5==0)
{
    printf("Number %d is divisible by 5",a);
}

}
