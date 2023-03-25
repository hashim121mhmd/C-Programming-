#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
printf("Enter 10 Numbers: ",a);//a starting memory ad

for(int i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<=9;i++)
{
    printf("\n%d\t%d",a[i],&a[i]);
}
}
