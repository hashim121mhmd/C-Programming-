#include<stdio.h>
#include <conio.h>
int factorial(int);
void main ()
{
    int num,fact;
    printf("Enter a no :");

    scanf("%d",&num);
    if(num>=0)
    {
    fact=factorial(num);
    printf("factorial of %d : %d",num,fact);

    }
    else
    {
        printf("%d is a neg no. so fact doesnt exist",num);
    }

}

int factorial(int a)
{
if(a>=2)
{
    return a*factorial(a-1);
}
return 1;
}
