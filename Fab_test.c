#include<stdio.h>
#include<conio.h>
void main()
{
int a[2];
a[0]=0;
a[1]=1;
printf("%d\n",a[0]);
for(int i=1;i<5;i++)
{
    int t=a[0]+a[1];
    a[0]=a[1];
    a[1]=t;
    printf("%d\n",a[0]);
}

}
