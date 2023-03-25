#include<stdio.h>
#include<conio.h>
void swap(int[]);

void main()
{
    int a[2],t;
    a[0]=123;
    a[1]=987;
    printf("%d\n%d\n%d\n",&a[0],&a[1],a);
    swap(a);
    printf("\nAfter Swap%d\n%d\n%d\n",a[0],a[1],a);
}

void swap(int c[])
{
    int k;
    c[0]=897;
    printf("%d\n%d\n%d",c[0],c[1],k);
}
