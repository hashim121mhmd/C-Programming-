#include<stdio.h>
#include <conio.h>
int factorial(int);

void main ()
{
    int num;
    printf("Enter a no :");

    scanf("%d",&num);
    if(num>=0)
    {
    fact=factorial(num);
    printf("facorial of %d : %d",a,fact);
    }
    else
    {
        printf("%d is a neg no. so fact doesnt exist",num);
    }


}
int factorial(int a)
{
    int i,fact=1;

for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
     return fact;

}
