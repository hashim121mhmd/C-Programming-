#include<conio.h>
#include<stdio.h>
void main()
{
    int *d,qwe;
    qwe=123;
    d=&qwe;
    printf("Memory Address of variable qwe is %d",&qwe);
printf("\nValue of pointer d=%d\n",d);
printf("*d=%d\n",*d);
printf("qwe=%d",qwe);

}
