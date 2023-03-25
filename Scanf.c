#include <stdio.h>
#include <conio.h>
void main()
{
int a,b;
printf("Enter two values\n");
scanf("%d%d",&a,&b);
printf("\nSum = %f\nSubstrat=%f\nDivision=%f\nMultiplication=%f\n",(float)(a+b),(float)(a-b),(float)a/b,a*b);
printf("\nAnd = %d\nOr=%d\nNot(a)=%d\nNot(b)=%d",(a&&b),(a||b),!a,!b);
getch();
}
