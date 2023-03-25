#include<conio.h>
#include<stdio.h>
void swap(int *,int*  );

void main()
{
    int a=32767;
    int b=65535;
printf("Before swapping : a=%d\tb=%d\n",a,b);
    swap(&a,&b);
printf("a=%d\nb=%d\n",a,b);
getch();
}

void swap(int  *c, int  *d)
 {
    int t;
    t=*c;
    *c=*d;
    *d=t;

    printf("a=%d\nb=%d\n%d\n",*c,*d,t);

}
