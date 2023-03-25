#include <stdio.h>
#include <conio.h>
void main()
{
char a; //initializing
printf("Enter a Month(1-12)\n");
scanf("%c",&a);
switch(a)
{
case 'a':
    printf("Welcome");
break;
case 'b':
    printf("Embedded");
break;
case '1':
    printf("First");
break;
default:
    printf("wrong input");
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
