#include<conio.h>
#include<stdio.h>
void swap(int []);
void main()
{
    int a[2]={32767,65535},t;
    printf("a=%d\nb=%d\n\n",a[0],a[1]);
   swap(a);
    printf("a=%d\nb=%d\n\n",a[0],a[1]);

}

void swap(int c[])
{
    int t;
    t=c[0];
    c[0]=c[1];
    c[1]=t;
    printf("a=%d\nb=%d\n\n",c[0],c[1]);
}
