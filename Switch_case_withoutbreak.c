#include <stdio.h>
#include <conio.h>
void main()
{
int a=123; //initializing
printf("Enter a Number\n");
scanf("%d",&a);
switch(a%3)
{
case 0:
    printf("Number %d is divisible by 3",a);
case 1:
    printf("Number %d is not divisible rem=1",a);
break;
default:
    printf("Number %d is not divisible rem=2",a);
    break;
}
}
/* conditional statements
1. switch..case

syntax
switch(condition)
{
    case 0:
    stmt;
    break;
    case 1:
    stmt;
    break;
    case 2:
    stmt;
    break;
    ----
    default:
    stmts;
    break
}
*/
