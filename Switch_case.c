#include <stdio.h>
#include <conio.h>
void main()
{
int a=123; //initializing
printf("Enter a Number\n");
scanf("%d",&a);
switch(a%2)
{
case 0:
    printf("Number %d is even",a);
break;
case 1:
    printf("Number %d is odd",a);
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
