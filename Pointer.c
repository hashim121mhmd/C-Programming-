#include<conio.h>
#include<stdio.h>
void main()
{
    int *a,b;
    b=234;
    a=&b;
    printf("%d\na%d\n%d\n*a=%d",b,a,&b,*a);
    *a=134;
    printf("\n%d",b);

}
